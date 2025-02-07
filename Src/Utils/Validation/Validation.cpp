#include "../../../Includes/Utils/Validation/Validation.hpp"

namespace ValidationUtils {
void verifyRow(int row) {
  if (row < 0)
    throw InvalidRowException(Messages::rowNegative(row));
  if (row == 0)
    throw InvalidRowException(Messages::rowZero());
}

void verifyCol(int col) {
  if (col < 0)
    throw InvalidColumnException(Messages::colNegative(col));
  if (col == 0)
    throw InvalidColumnException(Messages::colZero());
}

void verifyRowCol(int row, int col) {
  verifyRow(row);
  verifyCol(col);
}

void verifyValidRow(int row) {
  if (row < 0)
    throw InvalidRowException(
        Messages::invalidRowMessage(row)); // faz throw e chama mensagem de erro
}

void verifyValidCol(int col) {
  if (col < 0)
    throw InvalidColumnException(Messages::invalidColumnMessage(col));
}

void verifyValidRowCol(int row, int col) {
  verifyValidRow(row);
  verifyValidCol(col);
}

void verifyValidIndexInVector(int number, int size) {
  if (number < 0)
    throw ArgumentOutOfRangeException(Messages::negativeIndexMessage(number));

  if (number >= size)
    throw ArgumentOutOfRangeException(Messages::outOfArrayMessage(number));
}

void verifyDifferentCol(int col1, int col2) {
  if (!areSameValues(col1, col2))
    throw DifferentColsException(Messages::differentColsMessage());
}

void verifyDifferentRow(int row1, int row2) {
  if (!areSameValues(row1, row2))
    throw DifferentRowsException(Messages::differentRowsMessage());
}

void verifyValidRowIndex(int row, int numRows) {
  verifyRow(row);

  if (row > numRows)
    throw ArgumentOutOfRangeException(Messages::outOfRowMatrixMessage(row));
}

void verifyValidColIndex(int col, int numCols) {
  verifyCol(col);

  if (col > numCols)
    throw ArgumentOutOfRangeException(Messages::outOfColMatrixMessage(col));
}

void verifyValidIndexes(int row, int col, int numRows, int numCols) {
  verifyRowCol(row, col);

  verifyValidRowIndex(row, numRows);
  verifyValidColIndex(col, numCols);
}

void verifyIfMatrixArrayIsEmpty(int size) {
  if (size == 0)
    throw NoMatricesException(Messages::emptyMatricesArrayMessage());
}

void verifyIfThereAreFiles() {
  for (const auto &entry : std::filesystem::directory_iterator("Files")) {
    if (std::filesystem::is_regular_file(entry)) { // Verifica se é um arquivo (não uma subpasta)
      return;
    }
  }

  throw NoMatricesException(Messages::noFilesMessage());
}

void verifyMatricesAreMultipliable(int rows, int cols) {
  if (rows != cols)
    throw InvalidMatrixOperationException(Messages::incompatibleDimensionsMessage());
}
} // namespace ValidationUtils