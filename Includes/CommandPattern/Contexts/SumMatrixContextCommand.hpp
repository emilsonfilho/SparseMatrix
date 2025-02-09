#ifndef SUM_ATRIX_CONTEXT_COMMAND_HPP
#define SUM_MATRIX_CONTEXT_COMMAND_HPP

#include "../../../Defs/MatrixInfoVectorRef.hpp"
#include "ContextCommand.hpp"
#include "../../Utils/Operations/SumMatrices.hpp"

class SumMatrixContextCommand : public ContextCommand {
public:
  MatrixInfoVectorRef matrices;
  int indexMatrixA;
  int indexMatrixB;

  /**
   * @brief Construtor do contexto para abrir arquiivo texto
   *
   * @param Matrices Matrizes no sistema
   * @param indexMatrixA Índice da primeira matriz
   * @param indexMatrixB Índice da segunda matriz
   */
  SumMatrixContextCommand(MatrixInfoVectorRef matrices, int indexMatrixA, int indexMatrixB);
};

#endif 

