#ifndef VALIDATION_UTILS_HPP
#define VALIDATION_UTILS_HPP

#include "../../../Includes/Classes/Node/Node.hpp"
#include "../../../Includes/Messages/Messages.hpp"
#include "../../Exceptions/InvalidColumnException.hpp"
#include "../../Exceptions/InvalidRowException.hpp"

// serve para a validação antes da criação da matriz
namespace ValidationUtils {
/**
 * @brief Faz a verificação de linha e coluna antes da criação da matrix
 * 
 * @param row Número da linha
 * @param col Número da coluna
 */
void verifyRowCol(int row, int col);

/**
 * @brief Faz verificação se Node é válido
 * 
 * @param row Número da linha
 * @param col Número da coluna
 */
void verifyValidRowCol(int row, int col);
} // namespace ValidationUtils

#endif
