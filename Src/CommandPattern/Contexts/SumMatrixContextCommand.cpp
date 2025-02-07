#include "../../../Includes/CommandPattern/Contexts/SumMatrixContextCommand.hpp"

SumMatrixContextCommand::SumMatrixContextCommand(MatrixPtrArrayRef matrices, int indexMatrixA, int indexMatrixB) 
                                                : matrices(matrices), indexMatrixA(indexMatrixA), indexMatrixB(indexMatrixB) {}