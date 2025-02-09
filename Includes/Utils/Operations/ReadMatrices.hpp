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
 * 
 * @throw FileIOException Se o arquivo não puder ser aberto
 */
void ReadMatrices(const std::string &NameFile, SparseMatrix *&matrices);

#endif
