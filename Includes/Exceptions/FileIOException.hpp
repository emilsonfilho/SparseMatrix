#ifndef FILE_IO_EXCEPTION_HPP
#define FILE_IO_EXCEPTION_HPP

#include <stdexcept>

class FileIOException : public std::runtime_error {
public:
    FileIOException(const std::string& message);
};

#endif