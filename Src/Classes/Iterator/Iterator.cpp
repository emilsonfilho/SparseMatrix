#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;
Iterator::Iterator(Node *address) : pointer(address) {}

void Iterator::nextInRow() {
  if (pointer != nullptr and pointer->getNext() != pointer)
    pointer = pointer->getNext();
}

void Iterator::nextInCol() {
  if (pointer != nullptr and pointer->getDown() != pointer) {
    pointer = pointer->getDown();
  }
}

bool Iterator::isRowBigger(const Iterator &it) {
  return compareRows(it, std::greater<int>());
}

bool Iterator::isRowSmaller(const Iterator &it) {
  return compareRows(it, std::less<int>());
}

bool Iterator::isColBigger(const Iterator &it) {
  return compareCols(it, std::greater<int>());
}

bool Iterator::operator==(const Iterator &it) { return pointer == it.pointer; }
bool Iterator::operator!=(const Iterator &it) { return pointer != it.pointer; }
double &Iterator::operator*() { return pointer->getValue(); }
const double &Iterator::operator*() const { return pointer->getValue(); }
