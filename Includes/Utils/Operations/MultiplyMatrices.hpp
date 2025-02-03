#ifndef MULTIPLY_MATRICES_HPP
#define MULTIPLY_MATRICES_HPP


#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"
#include "../../../Includes/Utils/Operations/MultiplyMatrices.hpp"
#include "../../../Defs/MatrixPtrArrayRef.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

SparseMatrix MultiplyMatrix(SparseMatrix *matricesA, SparseMatrix *matricesB);

#endif
