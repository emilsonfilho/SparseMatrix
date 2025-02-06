#ifndef READMATRICES_HPP
#define READMATRICES_HPP


#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"
#include "../../../Includes/Utils/Operations/SumMatrices.hpp"
#include "../../../Defs/MatrixPtrArrayRef.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

SparseMatrix *SumMatrix(SparseMatrix *matricesA, SparseMatrix *matricesB);

#endif
