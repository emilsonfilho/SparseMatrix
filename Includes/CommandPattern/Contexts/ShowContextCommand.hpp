#ifndef SHOW_CONTEXT_COMMAND_HPP
#define SHOW_CONTEXT_COMMAND_HPP

#include "../../../Defs/MatrixInfoVectorRef.hpp"
#include "ContextCommand.hpp"

class ShowContextCommand : public ContextCommand {
public:
    MatrixInfoVectorRef system;

    /**
     * @brief Construtor do comando de mostrar matrizes no sistema
     * 
     * @param system Matrizes no sistema
     */
    ShowContextCommand(const MatrixInfoVectorRef system);
};

#endif