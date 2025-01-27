#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <stdexcept>
#include <string>

// Exceções específicas para validação
class InvalidRowException : public std::runtime_error {
    
public:
    explicit InvalidRowException(const std::string& message)
        : std::runtime_error(message) {}
};

class InvalidColumnException : public std::runtime_error {
public:
    explicit InvalidColumnException(const std::string& message)
        : std::runtime_error(message) {}
};

#endif
