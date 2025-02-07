#include "../../Includes/Exceptions/InvalidMatrixOperationException.hpp"

InvalidMatrixOperationException::InvalidMatrixOperationException(const std::string &message): std::runtime_error(message) {}