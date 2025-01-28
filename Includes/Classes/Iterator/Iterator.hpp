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
   * @brief Construtor para um endereço de memória constante indicado
   *
   * @param address Endereço da memória a ser apontado pelo Iterator
   */
  Iterator(const Node *address);

  /**
   * @brief Move o iterator para o próximo nó naquela linha
   *
   * @note Em caso de não hver mais nenhum próximo elemento, aponta-se para o nó
   * sentinela.
   * @note Se o iterator já apontar para o nó sentinela e não houver próximos
   * elemetos, aponta-se para o própro sentinela
   */
  void nextInRow();


  /**
   * 
   * @brief Move o interator para o proximo nó naquela coluna
   * 
   * @note Em caso de não hver mais nenhum próximo elemento, aponta-se para o nó
   * sentinela.
   * @note Se o iterator já apontar para o nó sentinela e não houver próximos
   * elemetos, aponta-se para o própro sentinela
   */
  void nextInCol();

  /**
   * @brief Retorna um ponteiro não modificável para o qual o iterator aponta
   */
  const Node* getPointer() const;

  /**
   * @brief Sobrecarga do operador igualdade
   *
   * Dois Iteradores são considerados iguais se apontam para o mesmo endereço de
   * memória
   */
  bool operator==(const Iterator &it);


  /**
   * 
   * @brief Sobrevarga do operador diferente
   * 
   * Dois Interaores são considerados diferentes se não apontam para o mesmo endereço de
   * memória
   */
  bool operator!=(const Iterator &it);

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