#ifndef PRINT_MATRIX_CONTEXT_COMMAND_HPP
#define PRINT_MATRIX_CONTEXT_COMMAND_HPP

#include "../../../Defs/MatrixInfoVectorRef.hpp"
#include "ContextCommand.hpp"

class PrintMatrixContextCommand : public ContextCommand {
public:
  int index;
  MatrixInfoVectorRef matrices;

  /**
   * @brief Construtor do contexto para impressão
   *
   * @param index Número da matrix
   * @param matrices Vetor com as matrizes do sistema
   */
  PrintMatrixContextCommand(int index, const MatrixInfoVectorRef matrices);
};

#endif