#ifndef GET_VALID_STRING_HPP
#define GET_VALID_STRING_HPP

#include <iostream>

#include "Trim.hpp"
#include "../../../Defs/StringValidatorArray.hpp"
#include "../../Exceptions/InvalidArgumentException.hpp"
#include "../../Messages/Messages.hpp"

std::string getValidString(const std::string &prompt, const StringValidatorArray validations);

#endif