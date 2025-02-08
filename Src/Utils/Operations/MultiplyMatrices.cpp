#include "../../../Includes/Utils/Operations/MultiplyMatrices.hpp"

SparseMatrix *multiply(SparseMatrix *matrixA, SparseMatrix *matrixB) {
    ValidationUtils::verifyMatricesAreMultipliable(matrixA->getNumCols(), matrixB->getNumRows());

    SparseMatrix* result = new SparseMatrix(matrixA->getNumRows(), matrixB->getNumCols());
    
    for (int i = 1; i <= matrixA->getNumRows(); i++) {
        for (int j = 1; j <= matrixB->getNumCols(); j++) {
            double sum = 0;
            for (int k = 1; k <= matrixA->getNumCols(); k++) {
                sum += matrixA->getElement(i, k) * matrixB->getElement(k, j);
            }
            if (sum != 0) {
                result->InsertMatriz(i, j, sum);
            }
        }
    }

    return result;
}