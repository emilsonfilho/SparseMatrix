#ifndef READMATRICES_HPP
#define READMATRICES_HPP


#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"
#include "../../../Includes/Utils/Operations/ReadMatrices.hpp"
#include "../../../Defs/MatrixPtrArrayRef.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

void ReadMatrices(const std::string &NameFile, SparseMatrix *&matrices);

#endif
