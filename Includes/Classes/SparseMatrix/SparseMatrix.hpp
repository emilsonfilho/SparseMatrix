#ifndef SPARSE_MATRIX_HPP
#define SPARSE_MATRIX_HPP

#include "../Node/Node.hpp"
#include "../Iterator/Iterator.hpp"

class SparseMatrix {
private:
  Node *head;
  int numRows;
  int numCols;

public:
  /**
   * @brief Cria a estrutura para uma matriz esparsa útil
   *
   * Um sistema de nós sentinelas conectados entre si, para cada linhas e cada
   * coluna
   *
   * Complexidade O(n + m), onde:
   * - n: número de linhas
   * - m: número de colunas
   *
   * @param numRows Número de linhas que a matriz terá
   * @param numCols Número de colunas que a matriz terá
   *
   * @note A desalocação de memória será efetuada em uma função diferente desta.
   * Aqui, serão colocados apenas as alocações dos nós sentinelas
   */
  SparseMatrix(int numRows, int numCols);

  /**
   * @brief Retorna um ponteiro modificável para o nó sentinela inicial
   */
  Node *getHead();
  /**
   * @brief Retorna um ponteiro constante para o nó sentinela inicial
   */
  const Node *getHead() const;
  /**
   * @brief Retorna o número de linhas da matriz
   */
  int getNumRows() const;
  /**
   * @brief Retorna o número de colunas da matriz
   */
  int getNumCols() const;
};

#endif