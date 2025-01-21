#include "../../Includes/Invoker/Invoker.hpp"

void CommandInvoker::registerCommand(const std::string& commandName, Command* command, Context context) {
    commandRegistry[commandName] = CommandInfo{ command, context };
}

void CommandInvoker::executeCommand(const std::string& commandName) {
    if (commandRegistry.find(commandName) == commandRegistry.end()) {
        std::cout << "Comando inválido! Use o comando 'help' para listar todos os comandos" << std::endl;
        return;
    }

    CommandInfo& info = commandRegistry[commandName];
    CommandContext* context = info.contextFactory();
    info.command->execute(context);

    delete context;
}