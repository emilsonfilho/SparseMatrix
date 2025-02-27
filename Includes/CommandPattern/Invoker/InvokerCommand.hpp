#ifndef INVOKER_HPP
#define INVOKER_HPP

#include "../../../Includes/Messages/Messages.hpp"
#include "../../Exceptions/InvalidCommandException.hpp"
#include "../Commands/HelpCommand.hpp"

using Context = std::function<ContextCommand *()>;

class InvokerCommand {
private:
  UnorderedMapCommand commandRegistry;

public:
  /**
   * @brief Registra um comando para que possa ser executado pelo usuário
   *
   * @param commandName Nome do comando a ser registrado
   * @param command Ponteiro para o arquivo de comando
   * @param context Função geradora do contexto do comando
   */
  void registerCommand(const std::string &commandName, Command *command,
                       Context context = nullptr);

  /**
   * @brief Executa o comando especificado pelo nome
   *
   * @param commandName Nome do comando a ser executado
   *
   * @throws InvalidCommandException se o comando não for encontrado
   */
  void executeCommand(const std::string &commandName);
  /**
   * @brief Função invocadora do comando especial HelpCommand
   */
  void showHelp();
};

#endif