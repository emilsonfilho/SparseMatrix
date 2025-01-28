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

std::string invalidArgumentForNumber() {
  return "Entrada invalida. Por favor, digite um numero valido";
}

std::string outOfArrayMessage(int number) {
  std::ostringstream os;
  os << "O indice " << number << " esta fora dos limites do vetor";
  return os.str();
}

std::string negativeIndexMessage(int number) {
  std::ostringstream os;
  os << "O indice " << number << " eh invalido pois eh negativo";
  return os.str();
}
} // namespace Messages