#include "../../../Includes/CommandPattern/Contexts/SumMatrixContextCommand.hpp"

SumMatrixContextCommand::SumMatrixContextCommand(MatrixPtrArrayRef matrixA, MatrixPtrArrayRef matrixB) 
                                                : matrixA(matrixA), matrixB(matrixB) {}