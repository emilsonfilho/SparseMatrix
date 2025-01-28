#include "../../../Includes/CommandPattern/Contexts/PrintMatrixContextCommand.hpp"

PrintMatrixContextCommand::PrintMatrixContextCommand(
    int index, std::vector<SparseMatrix *> &matrices)
    : index(index), matrices(matrices) {}