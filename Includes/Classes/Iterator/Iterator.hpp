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

  /**
   * @brief Retorna uma referência para o valor do nó apontado
   */
  double &operator*();
  /**
   * @brief Retorna uma referência constante para o valor do nó apontado
   */
  const double &operator*() const;
};

#endif