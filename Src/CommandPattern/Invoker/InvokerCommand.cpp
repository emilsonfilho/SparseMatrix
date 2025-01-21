#include "../../../Includes/CommandPattern/Invoker/InvokerCommand.hpp"

void InvokerCommand::registerCommand(const std::string& commandName, Command* command, Context context) {
    if (!context) {
        context = []() -> ContextCommand* { return nullptr; };
    }
    
    commandRegistry[commandName] = CommandInfo{ command, context };
}

void InvokerCommand::executeCommand(const std::string& commandName) {
    if (commandRegistry.find(commandName) == commandRegistry.end()) {
        std::cout << "Comando inválido! Use o comando 'help' para listar todos os comandos" << std::endl;
        return;
    }

    CommandInfo& info = commandRegistry[commandName];
    ContextCommand* context = info.contextFactory();
    info.command->execute(context);

    delete context;
}

void InvokerCommand::showHelp() {
    HelpCommand help("help", "Exibe uma lista de descrições de cada comando", commandRegistry);
    help.execute();
}