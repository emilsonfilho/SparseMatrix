#ifndef GET_VALID_STRING_HPP
#define GET_VALID_STRING_HPP

#include <iostream>

#include "../../../Defs/StringValidatorArray.hpp"
#include "../../Exceptions/InvalidArgumentException.hpp"
#include "../../Messages/Messages.hpp"
#include "Trim.hpp"

/**
 * @brief Obtém uma string válida
 *
 * @param prompt Mensagem a ser exibida
 * @param validations Validações
 * @return std::string String válida
 */
std::string getValidString(const std::string &prompt,
                           const StringValidatorArray validations);

#endif