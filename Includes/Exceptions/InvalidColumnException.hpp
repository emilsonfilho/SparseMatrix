#ifndef INVALID_COLUMN_EXCEPTION_HPP
#define INVALID_COLUMN_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class InvalidColumnException : public std::runtime_error {
public:
  /**
   * @brief Cria uma exceção de coluna inválida
   * 
   * @param message Mensagem a ser exibida
   */
  explicit InvalidColumnException(const std::string &message);
};

#endif