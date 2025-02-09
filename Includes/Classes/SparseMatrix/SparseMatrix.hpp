#ifndef SPARSE_MATRIX_HPP
#define SPARSE_MATRIX_HPP

#include <iostream>
#include <iomanip>

#include "../Iterator/Iterator.hpp"

class SparseMatrix {
private:
  Node *head;
  int numRows;
  int numCols;

public:
  /**
   * @brief Construtor padrão de uma matriz esparsa
   *
   * Inicializa a matriz com 0 linhas e 0 colunas
   */
  SparseMatrix() = default;

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
   * 
   * @throws InvalidRowException e InvalidColumnException caso o número de linhas ou colunas seja inválido
   */
  SparseMatrix(int numRows, int numCols);

  /**
   * @brief Exibe a matrix no terminal
   * 
   * @note Complexidade O(n * m)
   */
  void print();

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

  /**
   * @brief Pega um elemento de dentro da matri. Se não existir, retorna zero
   * 
   * @param row Linha do elemento a ser pego
   * @param col Coluna do elemento a ser pego
   * 
   * @note Complexidade O(n)
   * 
   * @throws InvalidRowException se a linha for inválida
   * @throws InvalidColumnException se a coluna for inválida
   * @throws ArgumentOutOfRangeException se o índice for negativo
   */
  double getElement(int row, int col) const;

  /**
   * @brief Insere um elemento na matriz
   * 
   * @param row Linha do elemento a ser inserido
   * @param col Coluna do elemento a ser inserido
   * @param value Valor do elemento a ser inserido
   * 
   * @note Complexidade O(n+m)
   * 
   * @throws InvalidRowException se a linha for inválida
   * @throws InvalidColumnException se a coluna for inválida
   * @throws ArgumentOutOfRangeException se o índice for negativo
   */
  void InsertMatriz(int row, int col, double value);

  /**
   * @brief Destrutor de uma matrix
   *
   * A desalocação de memória para os Nodes são feitos aqui
   *
   * @note Complexidade O(n * m)
   */
  ~SparseMatrix();
};

#endif