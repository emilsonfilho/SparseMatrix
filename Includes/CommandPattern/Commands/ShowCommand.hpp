#ifndef SHOW_COMMAND_HPP
#define SHOW_COMMAND_HPP

#include "../Contexts/ShowContextCommand.hpp"
#include "Command.hpp"

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

  /**
   * @brief Executa o comando de mostrar as matrizes disponíveis na tela
   *
   * @param context Contexto do comando
   */
  void execute(ContextCommand *context) const override;
};

#endif