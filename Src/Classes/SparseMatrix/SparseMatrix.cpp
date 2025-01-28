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

Node *SparseMatrix::getHead() { return head; }
const Node *SparseMatrix::getHead() const { return head; }
int SparseMatrix::getNumRows() const { return numRows; }
int SparseMatrix::getNumCols() const { return numCols; }

SparseMatrix::~SparseMatrix() {
  Node *sentinel = head;

  Node *currentRow = sentinel;
  for (int i = 0; i <= numRows; i++) {
    while (currentRow->getNext() != currentRow) {
      Node *aux = currentRow->getNext();
      currentRow->setNext(aux->getNext());
      delete aux;
    }

    currentRow = currentRow->getDown();
  }

  while (sentinel->getDown() != sentinel) {
    Node *aux = sentinel->getDown();
    sentinel->setDown(aux->getDown());
    delete aux;
  }

  delete sentinel;
}