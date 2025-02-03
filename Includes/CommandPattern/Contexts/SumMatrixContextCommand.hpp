#ifndef SUM_ATRIX_CONTEXT_COMMAND_HPP
#define SUM_MATRIX_CONTEXT_COMMAND_HPP

#include <vector>
#include <fstream>
#include <string>

#include "../../../Defs/MatrixPtrArrayRef.hpp"
#include "ContextCommand.hpp"

class SumMatrixContextCommand : public ContextCommand {
public:
MatrixPtrArrayRef matrixA;
MatrixPtrArrayRef matrixB;
public: 

/**
   * @brief Construtor do contexto para abrir arquiivo texto
   *
   * @param MatrixA 
   * 
   * @param matrixB 
   */
  SumMatrixContextCommand(MatrixPtrArrayRef matrixA, MatrixPtrArrayRef matrixB);

  
};

#endif 

