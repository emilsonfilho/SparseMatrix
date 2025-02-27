#ifndef READ_MATRIX_COMMAND_HPP
#define READ_MATRIX_COMMAND_HPP

#include "../../CommandPattern/Contexts/ReadMatrixContextCommand.hpp"
#include "Command.hpp"

class ReadMatrixCommand : public Command {
public:
  /**
   * @brief Construtor para o comando
   *
   * @param name Nome do comando
   * @param description Descrição do comando
   */
  ReadMatrixCommand(const std::string &name, const std::string &description);

  /**
   * @brief Métooo de execução
   *
   * @param context Contexto do comando
   *
   * @throw FileIOException Se o arquivo não puder ser aberto
   */
  void execute(ContextCommand *context) const override;
};

#endif