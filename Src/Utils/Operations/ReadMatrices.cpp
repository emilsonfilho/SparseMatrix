#include "../../../Includes/Utils/Operations/ReadMatrices.hpp"

void ReadMatrices(const std::string &NameFile, SparseMatrix *&matrixMem) {
    std::ifstream Arquivo(Path + NameFile + Extension);

    if (!Arquivo) { 
        std::cerr << "Erro ao abrir o arquivo: " << NameFile << std::endl;
        return; // crie erro correto
    }

    int numCols, numRows;
    int col, row;
    double value;

    Arquivo >> numRows >> numCols;
    SparseMatrix* Matrizz = new SparseMatrix(numRows, numCols);
    while (Arquivo >> row >> col >> value) {
        Matrizz->InsertMatriz(row, col, value);
    }

    matrixMem = Matrizz;
}