#ifndef INVALID_COLUMN_EXCEPTION_HPP
#define INVALID_COLUMN_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class InvalidColumnException : public std::runtime_error {
public:
    explicit InvalidColumnException(const std::string& message)
        : std::runtime_error(message) {}
};

#endif