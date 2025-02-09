#ifndef READMATRICES_HPP
#define READMATRICES_HPP

#include <fstream>

#include "../../Classes/SparseMatrix/SparseMatrix.hpp"
#include "../../../Defs/Path.hpp"

/**
 * @brief Lê as matrizes de um arquivo
 * 
 * @param NameFile Nome do arquivo
 * @param matrices Matrizes lidas
 */
void ReadMatrices(const std::string &NameFile, SparseMatrix *&matrices);

#endif
