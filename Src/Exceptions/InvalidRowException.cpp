#include "../../Includes/Exceptions/InvalidRowException.hpp"

InvalidRowException::InvalidRowException(const std::string &message)
    : std::runtime_error(message) {}