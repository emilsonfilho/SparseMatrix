#ifndef FORMAT_OPERATION_ORIGIN_HPP
#define FORMAT_OPERATION_ORIGIN_HPP

#include <string>

/**
 * @brief Realiza a formatação da mensagem de origem a ser colocada no sistema
 * 
 * @param op De qual operação origem veio
 * @param first Origem do primeiro membro da operação
 * @param second Origem do segundo membro da operação
 */
std::string formatOperationOrigin(const std::string &op, const std::string &first, const std::string &second);

#endif