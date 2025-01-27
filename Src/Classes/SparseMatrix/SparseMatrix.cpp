#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"

SparseMatrix::SparseMatrix(int numRows, int numCols) {
  Node *head = new Node(0, 0, 0.0);

  Node *aux = head;
  for (int i = 1; i <= numCols; i++) {
    Node *newNode = new Node(0, i, 0.0);

    // Associando os ponteiros na mesma linha
    aux->setNext(newNode);
    newNode->setDown(aux); // Garantindo que a listas de down sejam circulares

    aux = aux->getNext();
  }
  aux->setNext(head); // Garantindo que a lista seja circular

  aux = head; // Resetando sistema para novo uso
  for (int i = 1; i <= numRows; i++) {
    Node *newNode = new Node(i, 0, 0.0);

    aux->setDown(newNode);
    newNode->setNext(aux);

    aux = aux->getDown();
  }
  aux->setDown(head);

  // Agora que os nós já foram criados
  this->head = head;
  this->numRows = numRows;
  this->numCols = numCols;
}

Node *SparseMatrix::getHead() const { return head; }