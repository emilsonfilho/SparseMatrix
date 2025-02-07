#include "../../../Includes/Utils/Operations/ReadMatrices.hpp"

void ReadMatrices(const std::string &filename, SparseMatrix *&matrixMem) {
    std::ifstream file(Path + filename + Extension);

    if (!file)
        throw FileIOException(Messages::fileOpenErrorMessage(filename));

    int numCols, numRows;
    int col, row;
    double value;

    file >> numRows >> numCols;
    SparseMatrix* Matrizz = new SparseMatrix(numRows, numCols);
    while (file >> row >> col >> value) {
        Matrizz->InsertMatriz(row, col, value);
    }

    matrixMem = Matrizz;
}