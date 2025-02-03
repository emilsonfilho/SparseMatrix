#include "../../../Includes/CommandPattern/Contexts/MultiplyMatrixContextCommand.hpp"


MultiplyMatrixContextCommand::MultiplyMatrixContextCommand(MatrixPtrArrayRef matrixA, MatrixPtrArrayRef matrixB) 
                                                : MatrixA(MatrixA), matrixB(matrixB) {}