#ifndef READ_MATRIX_CONTEXT_COMMAND_HPP
#define READ_MATRIX_CONTEXT_COMMAND_HPP

#include "../../../Defs/MatrixInfoVectorRef.hpp"
#include "../../Utils/Operations/ReadMatrices.hpp"
#include "ContextCommand.hpp"

class ReadMatrixContextCommand : public ContextCommand {
public:
  std::string nameMatriz;
  MatrixInfoVectorRef matrices;

  /**
   * @brief Construtor do contexto para abrir arquiivo texto
   *
   * @param nameMatriz nome.txt para ser lido
   * 
   * @param matrix Vetor com as matrizes do sistema
   */
  ReadMatrixContextCommand(const std::string &nameMatriz, MatrixInfoVectorRef matrices);

  //ReadMatrixContextCommand(std::string caminho);
};

#endif 