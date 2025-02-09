#include "../../Includes/Exceptions/NoMatricesException.hpp"

NoMatricesException::NoMatricesException(const std::string &message)
    : std::logic_error(message) {}