#ifndef PRINT_MATRIX_COMMAND_HPP
#define PRINT_MATRIX_COMMAND_HPP

#include "../Contexts/PrintMatrixContextCommand.hpp"
#include "Command.hpp"

class PrintMatrixCommand : public Command {
public:
  /**
   * @brief Construtor para o comando
   *
   * @param name Nome do comando
   * @param description Descrição do comando
   */
  PrintMatrixCommand(const std::string &name, const std::string &description);

  void execute(ContextCommand *context) const override;
};

#endif