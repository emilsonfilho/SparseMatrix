#include "../../../Includes/CommandPattern/Contexts/MultiplyContextCommand.hpp"

MultiplyContextCommand::MultiplyContextCommand(int indexMatrixA, int indexMatrixB, MatrixInfoVectorRef matrices): indexMatrixA(indexMatrixA), indexMatrixB(indexMatrixB), matrices(matrices) {}