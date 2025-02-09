#ifndef SUM_MATRIX_COMMAND_HPP
#define SUM_MATRIX_COMMAND_HPP

#include "../../CommandPattern/Contexts/SumMatrixContextCommand.hpp"
#include "../../Utils/Complements/FormatOperationOrigin.hpp"
#include "Command.hpp"

class SumMatrixCommand : public Command {
public:
  /**
   * @brief Construtor para o comando
   *
   * @param name Nome do comando
   * @param description Descrição do comando
   */
  SumMatrixCommand(const std::string &name, const std::string &description);

  /**
   * @brief Métooo de execução
   *
   * @param context Contexto do comando
   *
   * @throws InvalidMatrixOperationException se as matrizes não forem somáveis
   */
  void execute(ContextCommand *context) const override;
};

#endif