#ifndef MULTIPLY_MATRIX_CONTEXT_COMMAND_HPP
#define MULTIPLY_MATRIX_CONTEXT_COMMAND_HPP

#include <vector>
#include <fstream>
#include <string>

#include "../../../Defs/MatrixPtrArrayRef.hpp"
#include "ContextCommand.hpp"

class MultiplyMatrixContextCommand : public ContextCommand {
public:
MatrixPtrArrayRef matrixA, matrixB;

public: 


/**
   * @brief Construtor do contexto para abrir arquiivo texto
   *
   * @param MatrixA POnteiro para matrix A
   * 
   * @param matrixB ponteiro para matrix B
   */
  MultiplyMatrixContextCommand(MatrixPtrArrayRef matrixA, MatrixPtrArrayRef matrixB);

  
};

#endif 