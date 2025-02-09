#ifndef VALIDATION_UTILS_HPP
#define VALIDATION_UTILS_HPP

#include "../../Classes/Node/Node.hpp"
#include "../../Exceptions/ArgumentOutOfRangeException.hpp"
#include "../../Exceptions/DifferentColsException.hpp"
#include "../../Exceptions/DifferentRowsException.hpp"
#include "../../Exceptions/FileIOException.hpp"
#include "../../Exceptions/InvalidColumnException.hpp"
#include "../../Exceptions/InvalidMatrixOperationException.hpp"
#include "../../Exceptions/InvalidRowException.hpp"
#include "../../Exceptions/NoMatricesException.hpp"
#include "../../Messages/Messages.hpp"
#include "../Complements/AreSameValues.hpp"

#include <filesystem>

// serve para a validação antes da criação da matriz
namespace ValidationUtils {
/**
 * @brief Faz a verificação da linha antes da criação da matriz
 *
 * @param row Número da linha
 */
void verifyRow(int row);

/**
 * @brief Faz a verificação da coluna antes da criação da matriz
 *
 * @param col Número da linha
 */
void verifyCol(int col);

/**
 * @brief Faz a verificação de linha e coluna antes da criação da matriz
 *
 * @param row Número da linha
 * @param col Número da coluna
 */
void verifyRowCol(int row, int col);

/**
 * @brief Faz verificação se row é válido
 *
 * @param row Número da linha
 */
void verifyValidRow(int row);

/**
 * @brief Faz verificação se col é válido
 *
 * @param col Número da linha
 */
void verifyValidCol(int col);

/**
 * @brief Faz verificação se Node é válido
 *
 * @param row Número da linha
 * @param col Número da coluna
 */
void verifyValidRowCol(int row, int col);

/**
 * @brief faz a verificação se o número é váido para um determinado size
 *
 * @param num Número a ser verificado
 * @param size Tamanho do vetor
 */
void verifyValidIndexInVector(int number, int size);

/**
 * @brief Verifica se duas colunas são diferentes
 *
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

/**
 * @brief Verifica se a linha dada esá dentro dos limites da matriz
 *
 * @param row Linha especificada
 * @param numRows Quantidade de linhas na matrix
 */
void verifyValidRowIndex(int row, int numRows);

/**
 * @brief Verifica se a coluna dada está dentro dos limites da matriz
 *
 * @param col Coluna especificada
 * @param numCols Quantidade de counas na matriz
 */
void verifyValidColIndex(int col, int numCols);

/**
 * @brief Verifica se os índices dados estão dentro dos limites da matriz
 *
 * @param row Linha especificada
 * @param col Coluna especificada
 * @param numRows Quantidade de linhas na matriz
 * @param numCols Quantidade de colunas na matriz
 */
void verifyValidIndexes(int row, int col, int numRows, int numCols);

/**
 * @brief Verifica se existem matrizes disponíveis no sistema
 *
 * Se não houver, lança uma exceção
 *
 * @param size Tamanho do array que guarda os ponteiros para as matrizes no
 * sistema
 */
void verifyIfMatrixArrayIsEmpty(int size);

/**
 * @brief Verifica se existem arquivos na pasta Files/
 *
 * Se não houver, lança uma exceção
 */
void verifyIfThereAreFiles();

/**
 * @brief Verifica se duas matrices são multiplicáveis
 *
 * Duas matrizes são consideradas multiplicáveis se o número de colunas na
 * primeira corresponde ao número de linhas da segunda
 *
 * @param rows Número de linhas da primeira matriz
 * @param cols Número de colunas da segunda matriz
 */
void verifyMatricesAreMultipliable(int rows, int cols);

/**
 * @brief Verifica se duas matrizes são somáveis
 *
 * Duas matrizes são consideradas somáveis se possuem as mesmas dimensões, i.e.,
 * o mesmo número de linhas e o mesmo número de colunas
 *
 * @param rowsA Quantidade de linhas na primeira matriz
 * @param colsA Quantidade de colunas na primeira matriz
 * @param rowsB Quantidade de linhas na segunda matriz
 * @param colsB Quantidade de colunas na segunda matriz
 */
void verifyMatricesAreSummable(int rowsA, int colsA, int rowsB, int colsB);

} // namespace ValidationUtils

#endif
