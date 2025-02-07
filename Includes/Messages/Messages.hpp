#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#include <sstream>
#include <string>

// Mensagens que são lançadas por exeptions
namespace Messages {
/**
 * @brief Mensagem de linha inválida
 *
 * @param row Número da linha
 */
std::string invalidRowMessage(int row);

/**
 * @brief Mensagem de coluna inválida
 *
 * @param col Número da coluna
 */
std::string invalidColumnMessage(int col);

/**
 * @brief Mensagem de coluna negativa
 *
 * @param col Número da coluna
 */
std::string colNegative(int col);

/**
 * @brief Mensagem de linha negativa
 *
 * @param row Número da linha
 */
std::string rowNegative(int row);

/**
 * @brief Mensagem de coluna nula
 */
std::string colZero();

/**
 * @brief Mensagem de coluna zero
 */
std::string rowZero();

/**
 * @brief Mensagem de comando inválido
 */
std::string invalidCommandMessage();

/**
 * @brief Mensagem de argumento inválido
 */
std::string invalidArgumentForNumber();

/**
 * @brief Mensagem auxiliar que diz que algo está fora de algo
 * 
 * @param number O número inválido
 * @param context String sobre do que se trata o número ("O indice", "A linha", "A coluna")
 * @param structure O "algo"
 */
std::string outOfBoundsMessage(int number, const std::string &context, const std::string& structure);

/**
 * @brief Mensagem de valor fora dos limites do vetor
 * 
 * @param number Número inválido
 */
std::string outOfArrayMessage(int number);

/**
 * @brief Mensagem de linha fora dos limites da matrix
 * 
 * @param number Número inválido
 */
std::string outOfRowMatrixMessage(int number);

/**
 * @brief Mensagem de coluna fora dos limites da matrix
 * 
 * @param number Número inválido
 */
std::string outOfColMatrixMessage(int number);

/**
 * @brief Mensagem de indice negativo
 */
std::string negativeIndexMessage(int number);

/**
 * @brief Mensagem de colunas diferentes
 */
std::string differentColsMessage();

/**
 * @brief Mensagem de linhas diferentes
 */
std::string differentRowsMessage();

/**
 * @brief Mensagem de vetor de matrizes nulo
 */
std::string emptyMatricesArrayMessage();

/**
 * @brief Mensagem de arquivo não encontrado
 */
std::string noFilesMessage();

/**
 * @brief Mensagem de arquivo não encontrado
 */
std::string fileNotFoundMessage();

/**
 * @brief Mensagem de dimensões incompatíveis
 */
std::string incompatibleDimensionsMessage();

/**
 * @brief Mensagem de erro ao abrir arquivob
 * 
 * @param filename Nome do arquivo
 */
std::string fileOpenErrorMessage(const std::string& filename);
} // namespace Messages

#endif
