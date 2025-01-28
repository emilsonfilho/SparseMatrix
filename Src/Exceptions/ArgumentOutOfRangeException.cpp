#include "../../Includes/Exceptions/ArgumentOutOfRangeException.hpp"

ArgumentOutOfRangeException::ArgumentOutOfRangeException(const std::string &message): std::out_of_range(message) {}