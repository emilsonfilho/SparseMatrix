#include "../../../Includes/Utils/Operations/SumMatrices.hpp"
#include <iostream>
#include <fstream>



#include "../../../Includes/Classes/SparseMatrix/SparseMatrix.hpp"

SparseMatrix SumMatrix(MatrixPtrArrayRef matricesA, MatrixPtrArrayRef matricesB) {
    std::ifstream Arquivo(NameFile);

    if (!Arquivo) { 
        std::cerr << "Erro ao abrir o arquivo: " << NameFile << std::endl;
         // crie erro correto
    }

    int numCols, numRows;
    int col, row;
    float value;

    Arquivo >> numRows >> numCols;
    SparseMatrix* Matrizz = new SparseMatrix(numRows, numCols);
    while (Arquivo >> row >> col >> value) {

    // verificação muito possivelmente desnecessaria
    if(row <= 0 || row > numRows || col <= 0 || col > numCols) {
        std::cerr << "Erro: Posição ";
        return;
    }

    // percorre os sentinelas ate encontrar a linha
    // do elemento que vai ser somado
    Node *rowSentinela = getHead()->getDown();
    while (rowSentinela->getRow() != row) {
        rowSentinela = rowSentinela->getDown();
    }


    // percorre os sentinelas ate encontrar a coluna
    // do elemento que vai ser somado
    Node *colSentinela = getHead()->getNext();
    while (colSentinela->getCol() != col) {
        colSentinela = colSentinela->getNext();
    }

    // percore a linha ate chegar na coluna do elemento
    Node *prevRow = rowSentinela;
    Node *currentRow = rowSentinela->getNext();
    while (currentRow != rowSentinela && currentRow->getCol() < col) {
        prevRow = currentRow;
        currentRow = currentRow->getNext();
    }

    // percore a coluna ate chegar na coluna do elemento
    Node *prevCol = colSentinela;
    Node *currentCol = colSentinela->getDown();
    while (currentCol != colSentinela && currentCol->getRow() < row) {
        prevCol = currentCol;
        currentCol = currentCol->getDown();
    }

    
    if (currentRow != rowSentinela && currentRow->getCol() == col) {
        currentRow->setValue(value);
        return;
    }

    // Criando o novo nó
    Node *novo = new Node(row, col, value, nullptr, nullptr);

    // Inserindo na linha
    prevRow->setNext(novo);
    novo->setNext(currentRow);

    // Inserindo na coluna
    prevCol->setDown(novo);
    novo->setDown(currentCol);

    }
    

    matrices.push_back(Matrizz);
}
