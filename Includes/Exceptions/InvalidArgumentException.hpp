#ifndef INVALID_ARGUMENT_EXCEPTION_HPP
#define INVALID_ARGUMENT_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class InvalidArgumentException : public std::invalid_argument {
public:
    /**
     * @brief Cria uma exceção de argumento inválido
     * 
     @param message Mensagema a ser exibida
     */
    explicit InvalidArgumentException(const std::string &message);
};

#endif