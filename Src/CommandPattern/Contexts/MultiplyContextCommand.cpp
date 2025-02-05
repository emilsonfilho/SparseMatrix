#include "../../../Includes/CommandPattern/Contexts/MultiplyContextCommand.hpp"

MultiplyContextCommand::MultiplyContextCommand(int indexMatrixA, int indexMatrixB, MatrixPtrArrayRef matrices): indexMatrixA(indexMatrixA), indexMatrixB(indexMatrixB), matrices(matrices) {}