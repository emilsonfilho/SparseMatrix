#include "../../../Includes/CommandPattern/Contexts/ReadMatrixContextCommand.hpp"


ReadMatrixContextCommand::ReadMatrixContextCommand(const std::string &nameMatriz, MatrixPtrArrayRef matrices) 
                                                : nameMatriz(nameMatriz), matrices(matrices) {}