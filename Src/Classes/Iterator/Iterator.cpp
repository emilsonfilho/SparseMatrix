#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;

Iterator::Iterator(Node *address) : pointer(address) {}

bool Iterator::operator==(const Iterator &it) { return pointer == it.pointer; }