#ifndef FILE_IO_EXCEPTION_HPP
#define FILE_IO_EXCEPTION_HPP

#include <stdexcept>

class FileIOException : public std::runtime_error {
public:
  /**
   * @brief Exceção para falha ao abrir o arquivo
   *
   * @oaram message Mensagem a ser exibida
   */
  explicit FileIOException(const std::string &message);
};

#endif