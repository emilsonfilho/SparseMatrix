#ifndef INVOKER_HPP
#define INVOKER_HPP

#include <iostream>
#include <unordered_map>
#include <string>

#include "../../Defs/CommandInfo.hpp"

using Context = std::function<CommandContext*()>;

class CommandInvoker
{
private:
    std::unordered_map<std::string, CommandInfo> commandRegistry;
public:
    /**
     * @brief Registra um comando para que possa ser executado pelo usuário
     * 
     * @param commandName Nome do comando a ser registrado
     * @param command Ponteiro para o arquivo de comando
     */
    void registerCommand(const std::string& commandName, Command* command, Context context);
    
    /**
     * @brief Executa o comando especificado pelo nome
     * 
     * @param commandName Nome do comando a ser executado
     */
    void executeCommand(const std::string& commandName);
};

#endif