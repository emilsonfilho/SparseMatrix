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
   * @brief Move o iterator para o próximo nó naquela linha
   *
   * @note Em caso de não hver mais nenhum próximo elemento, aponta-se para o nó
   * sentinela.
   * @note Se o iterator já apontar para o nó sentinela e não houver próximos
   * elemetos, aponta-se para o própro sentinela
   */
  void nextInRow();
};

#endif