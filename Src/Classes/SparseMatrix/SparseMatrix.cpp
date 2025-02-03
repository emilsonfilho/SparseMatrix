#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"

SparseMatrix::SparseMatrix(int numRows, int numCols) {
  ValidationUtils::verifyRowCol(numRows, numCols);

  Node *head = new Node(0, 0, 0.0);

  Node *aux = head;
  for (int i = 1; i <= numCols; i++) {
    Node *newNode = new Node(0, i, 0.0);

    // Associando os ponteiros na mesma linha
    aux->setNext(newNode);
    newNode->setDown(
        newNode); // Garantindo que a listas de down sejam circulares

    aux = aux->getNext();
  }
  aux->setNext(head); // Garantindo que a lista seja circular

  aux = head; // Resetando sistema para novo uso
  for (int i = 1; i <= numRows; i++) {
    Node *newNode = new Node(i, 0, 0.0);
    aux->setDown(newNode);
    newNode->setNext(newNode);
    aux = aux->getDown();
  }
  aux->setDown(head);

  // Agora que os nós já foram criados
  this->head = head;
  this->numRows = numRows;
  this->numCols = numCols;
}

void SparseMatrix::print() {
  std::ostringstream os;

  Iterator it(head);
  it.nextInCol();

  while (it != Iterator(head)) {
    if (it.getPointer()->getNext() == it.getPointer()) {
      for (int i = 0; i < numCols; i++) {
        os << "0 ";
      }
    } else {
      Node *nextNode = it.getPointer()->getNext();
      int nextNodeCol = nextNode->getCol();

      for (int i = 1; i <= numCols; i++) {
        if (i == nextNodeCol) {
          os << nextNode->getValue() << ' ';

          nextNode = nextNode->getNext();
          nextNodeCol = nextNode->getCol();
        } else {
          os << "0 ";
        }
      }
    }

    os << '\n';
    it.nextInCol();
  }

  std::cout << os.str();
}

Node *SparseMatrix::getHead() { return head; }
const Node *SparseMatrix::getHead() const { return head; }
int SparseMatrix::getNumRows() const { return numRows; }
int SparseMatrix::getNumCols() const { return numCols; }

double SparseMatrix::getElement(int row, int col) const {
  ValidationUtils::verifyValidIndexes(row, col, numRows, numCols);

  // Node porque é melhor de se obter o índice
  Iterator it(head);

 /*
   * A lista utilizada é circular e possui nós sentinelas, garantindo que:
   * - getPointer() nunca retorna nullptr, a menos que o Iterator tenha sido configurado para isso.
   * - getNext() sempre retorna um endereço válido, evitando acessos inválidos.
   * - Índices zero nunca são válidos, pois são reservados para nós sentinelas.
   * Portanto, não há risco de loops infinitos ou acessos inválidos nesta implementação.
   */

  // Percorrendo as linhas até chegar onde eu quero
  while (it.getPointer()->getRow() != row) it.nextInCol();

  while (it.getPointer()->getCol() < col) {
    if (it.getPointer()->getNext()->getCol() == 0) return 0;
    it.nextInRow();
  }
  
  // Se a coluna for maior do que a gente quer, é porque não existe aquele elemento e existe um que é depois dele
  if (it.getPointer()->getCol() > col) return 0;
    
  return *it;
}

void SparseMatrix::InsertMatriz(int row, int col, float value) {
    if (row <= 0 || row > numRows || col <= 0 || col > numCols) {
        std::cerr << "Erro: Posição ";
        return;
    }

    if (value == 0) return;
    
    Node *rowSentinela = head->getDown();
    while (rowSentinela->getRow() != row) {
        rowSentinela = rowSentinela->getDown();
    }

    Node *colSentinela = head->getNext();
    while (colSentinela->getCol() != col) {
        colSentinela = colSentinela->getNext();
    }

    Node *prevRow = rowSentinela;
    Node *currentRow = rowSentinela->getNext();
    while (currentRow != rowSentinela && currentRow->getCol() < col) {
        prevRow = currentRow;
        currentRow = currentRow->getNext();
    }

    Node *prevCol = colSentinela;
    Node *currentCol = colSentinela->getDown();
    while (currentCol != colSentinela && currentCol->getRow() < row) {
        prevCol = currentCol;
        currentCol = currentCol->getDown();
    }

    
    if (currentRow != rowSentinela && currentRow->getCol() == col) {
        currentRow->setValue(value);
        return;
    }

    // Criando o novo nó
    Node *novo = new Node(row, col, value, nullptr, nullptr);

    // Inserindo na linha
    prevRow->setNext(novo);
    novo->setNext(currentRow);

    // Inserindo na coluna
    prevCol->setDown(novo);
    novo->setDown(currentCol);
}