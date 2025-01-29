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
