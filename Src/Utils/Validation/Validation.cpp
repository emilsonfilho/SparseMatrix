#include "../../../Includes/Utils/Validation/Validation.hpp"

namespace ValidationUtils {
void verifyRowCol(int row, int col) {
  if (row < 0)
    throw InvalidRowException(Messages::rowNegative(row));
  if (row == 0)
    throw InvalidRowException(Messages::rowZero());

  if (col < 0)
    throw InvalidColumnException(Messages::colNegative(col));
  if (col == 0)
    throw InvalidColumnException(Messages::colZero());
}

void verifyValidRowCol(int row, int col) {
  if (row < 0)
    throw InvalidRowException(
        Messages::invalidRowMessage(row)); // faz throw e chama mensagem de erro

  if (col < 0)
    throw InvalidColumnException(Messages::invalidColumnMessage(col));
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
} // namespace ValidationUtils