#ifndef READ_MATRIX_CONTEXT_COMMAND_HPP
#define READ_MATRIX_CONTEXT_COMMAND_HPP

#include <vector>
#include <fstream>
#include <string>

#include "../../../Defs/MatrixPtrArrayRef.hpp"
#include "../../Utils/Operations/ReadMatrices.hpp"
#include "ContextCommand.hpp"

class ReadMatrixContextCommand : public ContextCommand {
public:
std::string nameMatriz;
MatrixPtrArrayRef matrices;

public: 
/**
   * @brief Construtor do contexto para abrir arquiivo texto
   *
   * @param nameMatriz nome.txt para ser lido
   * 
   * @param matrix Vetor com as matrizes do sistema
   */
  ReadMatrixContextCommand(const std::string &nameMatriz, MatrixPtrArrayRef matrices);

  //ReadMatrixContextCommand(std::string caminho);
};

#endif 