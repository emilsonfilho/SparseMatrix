#include "../../../Includes/Utils/Operations/MultiplyMatrices.hpp"

SparseMatrix *multiply(SparseMatrix *matrixA, SparseMatrix *matrixB) {
    SparseMatrix* result = new SparseMatrix(matrixA->getNumRows(), matrixB->getNumCols());

    if (matrixA->getNumCols() != matrixB->getNumRows()) {
        std::cout << "Error: The number of columns of the first matrix must be equal to the number of rows of the second matrix" << std::endl;
        return result;
    }
    
    std::cout << "teste\n" << std::flush;

    Iterator begin = matrixA->beginRow();
    Iterator beforeBegin = matrixA->beforeBegin();

    while (begin != beforeBegin) {
        int i = begin.getPointer()->getRow();

        Iterator aCurrent = begin;
        aCurrent.nextInRow(); // percorrer as linhas

        while (aCurrent != begin) {
            int k = aCurrent.getPointer()->getCol();
            double valueA = *aCurrent;

            Iterator bCurrent = matrixB->getFirstElementInCol(k);
            while (bCurrent.getPointer()->getRow() != 0) {
                int j = bCurrent.getPointer()->getRow();
                double valueB = *bCurrent;
                double value = valueA * valueB;

                if (value != 0) {
                    std::cout << "entrei aqui?\n";
                    result->insertOrAdd(i, j, value);
                }

                bCurrent.nextInCol();
            }

            aCurrent.nextInRow();
        }

        begin.nextInCol();
    }

    return result;
}