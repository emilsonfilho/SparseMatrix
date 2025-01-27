#ifndef INVALID_ROW_EXCEPTION_HPP
#define INVALID_ROW_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class InvalidRowException : public std::runtime_error {
public:
  /**
   * @brief Cria uma exceção de linha inválida
   *
   * @param message Mensagem a ser exibida
   */
  explicit InvalidRowException(const std::string &message);
};

#endif