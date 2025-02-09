#ifndef GET_CONTEXT_COMMAND_HPP
#define GET_CONTEXT_COMMAND_HPP

#include "../../../Defs/MatrixInfoVectorRef.hpp"
#include "ContextCommand.hpp"

class GetContextCommand : public ContextCommand {
public:
  int row;
  int col;
  int index;
  MatrixInfoVectorRef matrices;

  /**
   * @brief Construtor co do contexto para instrução
   *
   * @param row Linha do elemento a ser pego
   * @param col Coluna do elemento a ser pego
   * @param index Número da matrix
   * @param matrices Vetor com as matrizes do sistema
   */
  GetContextCommand(int row, int col, int index,
                    const MatrixInfoVectorRef matrices);
};

#endif