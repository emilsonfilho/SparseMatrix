#ifndef INVALID_ROW_EXCEPTION_HPP
#define INVALID_ROW_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class InvalidRowException : public std::runtime_error {
public:
    explicit InvalidRowException(const std::string& message)
        : std::runtime_error(message) {}
};

#endif