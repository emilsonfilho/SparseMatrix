#ifndef HELP_COMMAND_HPP
#define HELP_COMMAND_HPP

#include <iostream>
#include <sstream>

#include "Command.hpp"
#include "../../../Defs/UnorderedMapCommand.hpp"

class HelpCommand : public Command
{
private:
    UnorderedMapCommand commandRegistry;
public:
    /**
     * @brief Construtor de HelpCommand com base nos atributos exigidos por Command
     * 
     * @param name Nome do comando
     * @param description Descrição do comando
     * @param mapCommand Tabela Hash fornecida pelo Invoker com todos os comandos disponíveis
     */
    HelpCommand(const std::string& name, const std::string& description, const UnorderedMapCommand& mapCommand);
    /**
     * @brief Função de execução de HelpCommand
     * 
     * @param context Contexto para execute (não usado)
     */
    void execute(ContextCommand* context = nullptr) const override;
};


#endif