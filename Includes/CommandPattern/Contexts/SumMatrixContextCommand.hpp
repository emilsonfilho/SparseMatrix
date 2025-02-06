#ifndef SUM_ATRIX_CONTEXT_COMMAND_HPP
#define SUM_MATRIX_CONTEXT_COMMAND_HPP

#include <vector>
#include <fstream>
#include <string>

#include "../../../Defs/MatrixPtrArrayRef.hpp"
#include "ContextCommand.hpp"
#include "../../Utils/Operations/SumMatrices.hpp"

class SumMatrixContextCommand : public ContextCommand {
public:
MatrixPtrArrayRef matrices;
int indexMatrixA;
int indexMatrixB;
public: 

/**
   * @brief Construtor do contexto para abrir arquiivo texto
   *
   * @param Matrices 
   * 
   * @param indexMatrixA
   * 
   * @param indexMatrixB
   */
  SumMatrixContextCommand(MatrixPtrArrayRef matrices, int indexMatrixA, int indexMatrixB);

  
};

#endif 

