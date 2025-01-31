#include "../../../Includes/CommandPattern/Contexts/PrintMatrixContextCommand.hpp"

PrintMatrixContextCommand::PrintMatrixContextCommand(
    int index, MatrixPtrArrayRef matrices)
    : index(index), matrices(matrices) {}