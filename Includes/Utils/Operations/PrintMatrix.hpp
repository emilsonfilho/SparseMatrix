#ifndef PRINT_MATRIX_HPP
#define PRINT_MATRIX_HPP

#include <iostream>
#include <sstream>

#include "../../Classes/SparseMatrix/SparseMatrix.hpp"

/**
 * @brief Printa uma matriz esparsa
 *
 * @param matrix A própria matriz
 *
 * @note Complexidade O(n * m)
 */
void printMatrix(const SparseMatrix &matrix);

#endif