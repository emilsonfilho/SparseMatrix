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
   * @brief Sobrecarga do operador igualdade
   *
   * Dois Iteradores são considerados iguais se apontam para o mesmo endereço de
   * memória
   */
  bool operator==(const Iterator &it);
};

#endif