#ifndef INVALID_COMMAND_EXCEPTION_HPP
#define INVALID_COMMAND_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class InvalidCommandException : public std::runtime_error {
public:
  /**
   * @brief Cria uma exceção de comando inválido
   * 
   * @param message Mensagem a ser exibida
   */
  explicit InvalidCommandException(const std::string &message);
};

#endif