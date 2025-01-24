#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;

Iterator::Iterator(Node *address) : pointer(address) {}

void Iterator::nextInColumn() {
  if (pointer != nullptr and pointer->getDown() != pointer)
    pointer = pointer->getDown();
}