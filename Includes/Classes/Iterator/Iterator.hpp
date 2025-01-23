#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "../Node/Node.hpp"

class Iterator {
private:
  Node *pointer{nullptr};

public:
  /**
   * @brief Construtor padrão que define o Iterator para nullptr
   */
  Iterator();
  /**
   * @brief Construtor para um endereço de memória indicado
   *
   * @param address Endereço da memória a ser apontado pelo Iterator
   */
  Iterator(Node *address);
};

#endif