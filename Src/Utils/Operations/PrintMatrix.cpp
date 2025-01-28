#include "../../../Includes/Utils/Operations/PrintMatrix.hpp"

void printMatrix(const SparseMatrix& matrix) {
    std::ostringstream os;

    Iterator it(matrix.getHead());
    it.nextInCol();

    while (it != Iterator(matrix.getHead())) {
        if (it.getPointer()->getNext() == it.getPointer()) {
            for (int i = 0; i < matrix.getNumCols(); i++) {
                os << "0 ";
            }
            os << '\n';
        } else {
            os << "condicao nao atendida\n";
        }

        it.nextInCol();
    }


    std::cout << os.str();
}
