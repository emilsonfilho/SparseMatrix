#include "../../Includes/Exceptions/InvalidArgumentException.hpp"

InvalidArgumentException::InvalidArgumentException(const std::string &message)
    : std::invalid_argument(message) {}