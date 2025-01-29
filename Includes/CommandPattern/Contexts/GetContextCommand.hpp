#ifndef GET_CONTEXT_COMMAND_HPP
#define GET_CONTEXT_COMMAND_HPP

#include "../../../Defs/MatrixPtrArrayRef.hpp"
#include "ContextCommand.hpp"

class GetContextCommand : public ContextCommand {
public:
    int row;
    int col;
    int index;
    MatrixPtrArrayRef matrices;

    GetContextCommand(int row, int col, int index, MatrixPtrArrayRef matrices);
};

#endif