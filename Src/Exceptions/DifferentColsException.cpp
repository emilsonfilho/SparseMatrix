#include "../../Includes/Exceptions/DifferentColsException.hpp"

DifferentColsException::DifferentColsException(const std::string &message) : runtime_error(message) {}