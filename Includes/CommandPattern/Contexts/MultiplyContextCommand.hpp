#ifndef MULTIPLY_CONTEXT_COMMAND_HPP
#define MULTIPLY_CONTEXT_COMMAND_HPP

#include "../../../Defs/MatrixInfoVectorRef.hpp"
#include "ContextCommand.hpp"

class MultiplyContextCommand : public ContextCommand {
public:
  int indexMatrixA;
  int indexMatrixB;
  MatrixInfoVectorRef matrices;

  /**
   * @brief Construtor do contexto para multiplicar matrizes
   *
   * @param indexMatrixA Índice da primeira matriz
   * @param indexMatrixB Índice da segunda matriz
   * @param matrices Vetor com as matrizes do sistema
   */
  MultiplyContextCommand(int indexMatrixA, int indexMatrixB,
                         MatrixInfoVectorRef matrices);
};

#endif