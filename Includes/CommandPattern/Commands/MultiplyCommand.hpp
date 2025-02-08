#ifndef MULTIPLY_COMMAND_HPP
#define MULTIPLY_COMMAND_HPP

#include "../Contexts/MultiplyContextCommand.hpp"
#include "../../Utils/Operations/MultiplyMatrices.hpp"
#include "../../Utils/Complements/FormatOperationOrigin.hpp"
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
     */
    void execute(ContextCommand *context) const override;
};

#endif