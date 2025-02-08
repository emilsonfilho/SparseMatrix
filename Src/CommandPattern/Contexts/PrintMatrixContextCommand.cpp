#include "../../../Includes/CommandPattern/Contexts/PrintMatrixContextCommand.hpp"

PrintMatrixContextCommand::PrintMatrixContextCommand(
    int index, const MatrixInfoVectorRef matrices)
    : index(index), matrices(matrices) {}