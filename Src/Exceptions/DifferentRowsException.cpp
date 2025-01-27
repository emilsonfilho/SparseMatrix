#include "../../Includes/Exceptions/DifferentRowsException.hpp"

DifferentRowsException::DifferentRowsException(const std::string &message): runtime_error(message) {}