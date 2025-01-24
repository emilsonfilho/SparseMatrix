#include "../../../Includes/Classes/Iterator/Iterator.hpp"

Iterator::Iterator() = default;

Iterator::Iterator(Node *address) : pointer(address) {}