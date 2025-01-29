#ifndef GET_VALID_NUMBER_HPP
#define GET_VALID_NUMBER_HPP

#include <iostream>
#include <string>

#include "IgnoreCin.hpp"
#include "../../../Defs/IntValidatorArray.hpp"
#include "../../../Includes/Exceptions/InvalidArgumentException.hpp"
#include "../../../Includes/Messages/Messages.hpp"

int getValidNumber(const std::string &prompt, const IntValidatorArray validations);

#endif