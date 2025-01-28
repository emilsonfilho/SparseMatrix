#ifndef PRINT_MATRIX_CONTEXT_COMMAND
#define PRINT_MATRIX_CONTEXT_COMMAND

#include <vector>

#include "../../Classes/SparseMatrix/SparseMatrix.hpp"
#include "../../Utils/Operations/PrintMatrix.hpp"
#include "ContextCommand.hpp"

class PrintMatrixContextCommand : public ContextCommand {
public:
  int index;
  std::vector<SparseMatrix *> &matrices;

  /**
   * @brief Construtro do contexto para impressão
   * 
   * @param index Número da matrix
   * @param matrices Vetor com as matrizes do sistema
   */
  PrintMatrixContextCommand(int index, std::vector<SparseMatrix *> &matrices);
};

#endif