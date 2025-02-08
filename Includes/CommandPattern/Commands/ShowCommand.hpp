#ifndef SHOW_COMMAND_HPP
#define SHOW_COMMAND_HPP

#include <iostream>

#include "Command.hpp"
#include "../Contexts/ShowContextCommand.hpp"

class ShowCommand : public Command {
    std::string name;
    std::string description;
public:
    /**
     * @brief Comando de mostrar tas matrizes disponíveis na tela
     * 
     * @param name Nome do comando
     * @param description Descrição do comando
     */
    ShowCommand(const std::string &name, const std::string &description);

    void execute(ContextCommand *context) const override;
};

#endif