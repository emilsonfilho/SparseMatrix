#ifndef MULTIPLY_MATRIX_COMMAND_HPP
#define MULTIPLY_MATRIX_COMMAND_HPP

#include "../../../Includes/CommandPattern/Contexts/ReadMatrixContextCommand.hpp"
#include "Command.hpp"

class MultiplyMatrixCommand : public Command {
public:
  /**
   * @brief Construtor para o comando
   *
   * @param name Nome do comando
   * @param description Descrição do comando
   */
  MultiplyMatrixCommand(const std::string &name, const std::string &description);

  /**
   * @brief Métooo de execução
   *
   * @param context Contexto do comando
   */
  void execute(ContextCommand *context) const override;
};

#endif