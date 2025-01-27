#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;
Iterator::Iterator(Node *address) : pointer(address) {}

void Iterator::nextInRow() {
  if (pointer != nullptr and pointer->getNext() != pointer)
    pointer = pointer->getNext();
}

bool Iterator::isRowBigger(const Iterator& it) {
  /**
  * Não conseguimos colocar uma mensagem de erro por agora
  * Task do Calebe precisa ser feita
  */
  ValidationUtils::verifySameCol(pointer->getCol(), it.pointer->getCol());

  return pointer->getRow() > it.pointer->getRow();
}

bool Iterator::operator==(const Iterator &it) { return pointer == it.pointer; }

double &Iterator::operator*() { return pointer->getValue(); }
const double &Iterator::operator*() const { return pointer->getValue(); }
