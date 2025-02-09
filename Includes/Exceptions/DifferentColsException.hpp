#ifndef DIFFERENT_COLS_HPP
#define DIFFERENT_COLS_HPP

#include <stdexcept>

class DifferentColsException : public std::runtime_error {
public:
  /**
   * @brief Exceções para quando duas colunas forem diferentes
   *
   * @param message Mensagem a ser capturada
   */
  explicit DifferentColsException(const std::string &message);
};

#endif