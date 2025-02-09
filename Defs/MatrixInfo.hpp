#ifndef MATRIX_INFO_HPP
#define MATRIX_INFO_HPP

#include "../Includes/Classes/SparseMatrix/SparseMatrix.hpp"

struct MatrixInfo {
  SparseMatrix *matrix;
  std::string origin;

  MatrixInfo() = default;
  MatrixInfo(SparseMatrix *matrix, const std::string &origin)
      : matrix(matrix), origin(origin){};
};

#endif