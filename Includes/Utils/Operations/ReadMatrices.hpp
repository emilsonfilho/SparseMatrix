#ifndef READMATRICES_HPP
#define READMATRICES_HPP

#include <fstream>

#include "../../Classes/SparseMatrix/SparseMatrix.hpp"
#include "../../../Defs/Path.hpp"

void ReadMatrices(const std::string &NameFile, SparseMatrix *&matrices);

#endif
