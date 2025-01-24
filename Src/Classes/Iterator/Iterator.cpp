#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;
Iterator::Iterator(Node *address) : pointer(address) {}

void Iterator::nextInRow() {
  if (pointer != nullptr and pointer->getNext() != pointer)
    pointer = pointer->getNext();
}

bool Iterator::operator==(const Iterator &it) { return pointer == it.pointer; }