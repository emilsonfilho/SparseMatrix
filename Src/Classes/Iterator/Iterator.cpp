#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;

Iterator::Iterator(Node *address) : pointer(address) {}

double &Iterator::operator*() { return pointer->getValue(); }
const double &Iterator::operator*() const { return pointer->getValue(); }