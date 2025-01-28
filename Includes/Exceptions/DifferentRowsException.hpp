#ifndef DIFFERENT_ROWS_EXCEPTION_HPP
#define DIFFERENT_ROWS_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class DifferentRowsException : public std::runtime_error {
public:
    /**
   * @brief Exceções para quando duas linhas forem diferentes
   *
   * @param message Mensagem a ser capturada
   */
    explicit DifferentRowsException(const std::string &message);
};

#endif