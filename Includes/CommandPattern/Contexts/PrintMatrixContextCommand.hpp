#ifndef PRINT_MATRIX_CONTEXT_COMMAND_HPP
#define PRINT_MATRIX_CONTEXT_COMMAND_HPP

#include <vector>

#include "../../../Defs/MatrixPtrArrayRef.hpp"
#include "ContextCommand.hpp"

class PrintMatrixContextCommand : public ContextCommand {
public:
  int index;
  MatrixPtrArrayRef matrices;

  /**
   * @brief Construtor do contexto para impressão
   *
   * @param index Número da matrix
   * @param matrices Vetor com as matrizes do sistema
   */
  PrintMatrixContextCommand(int index, MatrixPtrArrayRef matrices);
};

#endif