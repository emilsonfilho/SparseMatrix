#ifndef VALIDATION_UTILS_HPP
#define VALIDATION_UTILS_HPP

#include "../../../Includes/Classes/Node/Node.hpp"
#include "../../../Includes/Messages/Messages.hpp"
#include "../../Exceptions/DifferentColsException.hpp"
#include "../../Exceptions/DifferentRowsException.hpp"
#include "../../Exceptions/InvalidColumnException.hpp"
#include "../../Exceptions/InvalidRowException.hpp"
#include "../Complements/AreSameValues.hpp"

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

/**
 * @brief Verifica se duas colunas são diferentes
t *
 * @param col1 Coluna 1
 * @param col2 Coluna 2
 */
void verifyDifferentCol(int col1, int col2);

/**
 * @brief Verifica se duas linhas são diferentes
 * 
 * @param row1 Linha 1
 * @param row2 Linha 2
 */
void verifyDifferentRow(int row1, int row2);
} // namespace ValidationUtils

#endif
