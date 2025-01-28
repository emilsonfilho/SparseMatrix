#include "../../../Includes/Utils/Operations/PrintMatrix.hpp"

void printMatrix(const SparseMatrix &matrix) {
  std::ostringstream os;

  Iterator it(matrix.getHead());
  it.nextInCol();

  while (it != Iterator(matrix.getHead())) {
    if (it.getPointer()->getNext() == it.getPointer()) {
      for (int i = 0; i < matrix.getNumCols(); i++) {
        os << "0 ";
      }
    } else {
      Node *nextNode = it.getPointer()->getNext();
      int nextNodeCol = nextNode->getCol();

      for (int i = 1; i <= matrix.getNumCols(); i++) {
        if (i == nextNodeCol) {
          os << nextNode->getValue() << ' ';

          nextNode = nextNode->getNext();
          nextNodeCol = nextNode->getCol();
        } else {
          os << "0 ";
        }
      }
    }

    os << '\n';
    it.nextInCol();
  }

  std::cout << os.str();
}
