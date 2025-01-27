#include "../../Includes/Exceptions/InvalidColumnException.hpp"

InvalidColumnException::InvalidColumnException(const std::string &message)
    : std::runtime_error(message) {}