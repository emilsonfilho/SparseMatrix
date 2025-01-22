#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "../Node/Node.hpp"

class Iterator {
  Node *pointer{nullptr};

public:
  Iterator();
  Iterator(Node *address);
};

#endif