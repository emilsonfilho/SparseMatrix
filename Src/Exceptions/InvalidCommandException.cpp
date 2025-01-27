#include "../../Includes/Exceptions/InvalidCommandException.hpp"

InvalidCommandException::InvalidCommandException(const std::string& message) : std::runtime_error(message) {}