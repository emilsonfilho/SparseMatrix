#include "../../../Includes/Utils/Operations/SumMatrices.hpp"
#include <iostream>
#include <fstream>
using namespace std;
#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"

SparseMatrix *SumMatrix(SparseMatrix* matricesA, SparseMatrix* matricesB) {

    Node* currentA = matricesA->getHead()->getDown()->getNext();
    Node* currentB = matricesB->getHead()->getDown()->getNext();
    SparseMatrix *result = new SparseMatrix(matricesA->getNumRows(), matricesB->getNumCols());
    cout << "entrou" << endl;

    while(currentA->getRow() != 0 && currentB->getRow() != 0){
        bool i = currentA->getCol() == 0, j = currentB->getCol() == 0; 
        while(!(i && j)){
            if(i == true){
                cout << "entrou i true" << endl;
                result->InsertMatriz(currentB->getRow(), currentB->getCol(), currentB->getValue());
                currentB = currentB->getNext();
            }
            else if(j == true){
                cout << "entrou j true" << endl;
                result->InsertMatriz(currentA->getRow(), currentA->getCol(), currentA->getValue());
                currentA = currentA->getNext();
            }
            else if(currentA->getCol() == currentB->getCol()){
                cout << "entrou igual true" << endl;

                result->InsertMatriz(currentA->getRow(), currentA->getCol(), currentA->getValue() + currentB->getValue());
                currentA = currentA->getNext();
                currentB = currentB->getNext();
            }
            else if(currentA->getCol() > currentB->getCol() ){
                cout << "entrou A maior true" << endl;

                result->InsertMatriz(currentB->getRow(), currentB->getCol(), currentB->getValue());
                currentB = currentB->getNext();
            }
            else{
                cout << "entrou B maior true" << endl;
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
    
