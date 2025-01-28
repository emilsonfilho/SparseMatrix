#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;
Iterator::Iterator(Node *address) : pointer(address) {}
Iterator::Iterator(const Node *address) : pointer(const_cast<Node*>(address)) {}

void Iterator::nextInRow() {
  if (pointer != nullptr and pointer->getNext() != pointer)
    pointer = pointer->getNext();
}

void Iterator::nextInCol() {
  if(pointer != nullptr and pointer->getDown() != pointer){
    pointer = pointer->getDown();
  }
}

const Node* Iterator::getPointer() const { return pointer; }

bool Iterator::operator==(const Iterator &it) { return pointer == it.pointer;}
bool Iterator::operator!=(const Iterator &it) { return pointer != it.pointer;} 
double &Iterator::operator*() { return pointer->getValue(); }
const double &Iterator::operator*() const { return pointer->getValue(); }
