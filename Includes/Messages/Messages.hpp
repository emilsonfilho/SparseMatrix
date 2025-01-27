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
} // namespace Messages

#endif
