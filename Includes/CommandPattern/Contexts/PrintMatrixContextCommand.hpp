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

  PrintMatrixContextCommand(int index, std::vector<SparseMatrix *> &matrices);
};

#endif