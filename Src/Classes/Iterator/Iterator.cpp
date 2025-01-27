#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;
Iterator::Iterator(Node *address) : pointer(address) {}

void Iterator::nextInRow() {
  if (pointer != nullptr and pointer->getNext() != pointer)
    pointer = pointer->getNext();
}

void Iterator::nextInCol() {
  if(pointer != nullptr and pointer->getDown() != pointer){
    pointer = pointer->getDown();
  }
}

bool Iterator::isRowBigger(const Iterator& it) {
  ValidationUtils::verifySameCol(pointer->getCol(), it.pointer->getCol());

  return pointer->getRow() > it.pointer->getRow();
}

bool Iterator::operator==(const Iterator &it) { return pointer == it.pointer; }
bool Iterator::operator!=(const Iterator &it) { return pointer != it.pointer; } 
double &Iterator::operator*() { return pointer->getValue(); }
const double &Iterator::operator*() const { return pointer->getValue(); }
