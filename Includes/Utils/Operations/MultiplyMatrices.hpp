#ifndef MULTIPLY_MATRICES_HPP
#define MULTIPLY_MATRICES_HPP

#include "../../Classes/SparseMatrix/SparseMatrix.hpp"

/**
 * @brief Multiplica duas matrizes esparsas
 *
 * @param matrixA Matriz A
 * @param matrixB Matriz B
 * @return SparseMatrix* Matriz resultante
 *
 * @throws InvalidMatrixOperationException Se as matrizes não forem
 * multiplicáveis
 */
SparseMatrix *multiply(SparseMatrix *matrixA, SparseMatrix *matrixB);

#endif