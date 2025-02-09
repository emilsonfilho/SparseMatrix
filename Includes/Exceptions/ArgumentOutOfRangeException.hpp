#ifndef ARGUMENT_OUT_OF_RANGE_EXCEPTION_HPP
#define ARGUMENT_OUT_OF_RANGE_EXCEPTION_HPP

#include <stdexcept>

class ArgumentOutOfRangeException : public std::out_of_range {
public:
  /**
   * @brief Cria uma exceção de argumento fora de intervalo
   *
   * @param message Mensagem a ser exibida
   */
  explicit ArgumentOutOfRangeException(const std::string &message);
};

#endif
