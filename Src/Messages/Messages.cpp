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

std::string outOfBoundsMessage(int number, const std::string &context, const std::string &structure) {
  std::ostringstream os;
  os << context << ' ' << number << " esta fora dos limites d" << structure;
  return os.str();
}

std::string outOfArrayMessage(int number) {
  return outOfBoundsMessage(number, "O indice", "o vetor");
}

std::string outOfRowMatrixMessage(int number) {
  return outOfBoundsMessage(number, "A linha", "a matriz");
}

std::string outOfColMatrixMessage(int number) {
  return outOfBoundsMessage(number, "A coluna", "a matriz");
}

std::string negativeIndexMessage(int number) {
  std::ostringstream os;
  os << "O indice " << number << " eh invalido pois eh negativo";
  return os.str();
}

std::string differentColsMessage() {
  return "Nao eh possivel comparar linhas com diferentes colunas";
}

std::string differentRowsMessage() {
  return "Nao eh possivel comparar colunas com diferentes linhas";
}

std::string emptyMatricesArrayMessage() {
  return "Nao existe nenhuma matriz no nosso sistema para efetuar essa operacao. Considere criar uma primeiro";
}

std::string noFilesMessage() {
  return "Nao existem arquivos na pasta Files/. Por favor, crie pelo meno um";
}

std::string fileNotFoundMessage() {
  return "Arquivo nao encontrado. Certifique-se de colocar a extensao do arquivo";
}

std::string incompatibleDimensionsMessage() {
  return "As matrizes não podem ser multiplicadas: o número de colunas da primeira matriz não corresponde ao número de linhas da segunda matriz.";
}
} // namespace Messages