#include "../../../Includes/Utils/Operations/SumMatrices.hpp"
#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"

SparseMatrix *SumMatrix(SparseMatrix* matrixA, SparseMatrix* matrixB) {
    ValidationUtils::verifyMatricesAreSummable(matrixA->getNumRows(), matrixA->getNumCols(), matrixB->getNumRows(), matrixB->getNumCols());

    Node* currentA = matrixA->getHead()->getDown()->getNext();
    Node* currentB = matrixB->getHead()->getDown()->getNext();
    SparseMatrix *result = new SparseMatrix(matrixA->getNumRows(), matrixB->getNumCols());

    while(currentA->getRow() != 0 && currentB->getRow() != 0){
        bool i = currentA->getCol() == 0, j = currentB->getCol() == 0; 
        while(!(i && j)){
            if(i == true){
                result->InsertMatriz(currentB->getRow(), currentB->getCol(), currentB->getValue());
                currentB = currentB->getNext();
            }
            else if(j == true){
                result->InsertMatriz(currentA->getRow(), currentA->getCol(), currentA->getValue());
                currentA = currentA->getNext();
            }
            else if(currentA->getCol() == currentB->getCol()){

                result->InsertMatriz(currentA->getRow(), currentA->getCol(), currentA->getValue() + currentB->getValue());
                currentA = currentA->getNext();
                currentB = currentB->getNext();
            }
            else if(currentA->getCol() > currentB->getCol() ){

                result->InsertMatriz(currentB->getRow(), currentB->getCol(), currentB->getValue());
                currentB = currentB->getNext();
            }
            else{
                result->InsertMatriz(currentA->getRow(), currentA->getCol(), currentA->getValue());
                currentA = currentA->getNext();
            }

            if(currentA->getCol() == 0)i = true;
            if(currentB->getCol() == 0)j = true;

        }

        currentA = currentA->getDown()->getNext();
        currentB = currentB->getDown()->getNext();
    }
   
    return result;
    }
    
