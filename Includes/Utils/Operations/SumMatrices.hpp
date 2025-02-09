#ifndef READMATRICES_HPP
#define READMATRICES_HPP

#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"

/**
 * @brief Soma duas matrizes esparsas
 * 
 * @param matricesA Matriz A
 * @param matricesB Matriz B
 * @return SparseMatrix* Matriz resultante
 */
SparseMatrix *SumMatrix(SparseMatrix *matricesA, SparseMatrix *matricesB);

#endif
