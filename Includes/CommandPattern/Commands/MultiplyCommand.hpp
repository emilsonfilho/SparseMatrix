#ifndef MULTIPLY_COMMAND_HPP
#define MULTIPLY_COMMAND_HPP

#include "../../Utils/Complements/FormatOperationOrigin.hpp"
#include "../../Utils/Operations/MultiplyMatrices.hpp"
#include "../Contexts/MultiplyContextCommand.hpp"
#include "Command.hpp"

class MultiplyCommand : public Command {
public:
  /**
   * @brief Construtor para o comando
   *
   * @param name Nome do comando
   * @param description Descrição do comando
   */
  MultiplyCommand(const std::string &name, const std::string &description);

  /**
   * @brief Método de execução
   *
   * @param context Contexto do comando
   *
   * @throws InvalidMatrixOperationException Se as matrizes não forem
   * multiplicáveis
   */
  void execute(ContextCommand *context) const override;
};

#endif