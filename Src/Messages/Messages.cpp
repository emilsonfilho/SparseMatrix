#include "../../Includes/Messages/Messages.hpp"

namespace Messages {
std::string invalidRowMessage(int row) {
  std::ostringstream os;
  os << "Linha invalida: " << row;
  return os.str();
}

std::string invalidColumnMessage(int col) {
  std::ostringstream os;
  os << "Linha invalida: " << col;
  return os.str();
}

std::string colNegative(int col) {
  std::ostringstream os;
  os << "A linha " << col << " e negativa";
  return os.str();
}

std::string rowNegative(int row) {
  std::ostringstream os;
  os << "A linha " << row << " e negativa";
  return os.str();
}

std::string colZero() { return "A coluna não pode ser zero"; }

std::string rowZero() { return "A linha não pode ser zero"; }

std::string invalidCommandMessage() {
  return "Comando invalido! Use o comando 'help' para listar todos os comandos";
}

std::string differentColsMessage() {
  return "Nao eh possivel comparar linhas com diferentes colunas";
}

std::string differentRowsMessage() {
  return "Nao eh possivel comparar colunas com diferentes linhas";
}
} // namespace Messages