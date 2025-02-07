#include "../../Includes/Exceptions/FileIOException.hpp"

FileIOException::FileIOException(const std::string& message): std::runtime_error(message) {}