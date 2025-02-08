#include "../../../Includes/CommandPattern/Contexts/ReadMatrixContextCommand.hpp"


ReadMatrixContextCommand::ReadMatrixContextCommand(const std::string &nameMatriz, MatrixInfoVectorRef matrices) 
                                                : nameMatriz(nameMatriz), matrices(matrices) {}