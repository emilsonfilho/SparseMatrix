#ifndef READMATRICES_HPP
#define READMATRICES_HPP

#include <fstream>

#include "../../../Defs/Path.hpp"
#include "../../Classes/SparseMatrix/SparseMatrix.hpp"

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
