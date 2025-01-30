#ifndef GET_COMMAND_HPP
#define GET_COMMAND_HPP

#include "../Contexts/GetContextCommand.hpp"
#include "Command.hpp"

class GetCommand : public Command {
public:
    /**
     * @brief Construtor para o comando
     * 
     * @param name Nome do comando
     * @param description Descrição do comando
     */
    GetCommand(const std::string &name, const std::string &description);

    /**
     * @brief Método de execução
     * 
     * @param context Contexto do comando
     */
    void execute(ContextCommand *context) const override;
};

#endif