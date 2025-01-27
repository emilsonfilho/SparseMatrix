#ifndef VALIDATION_UTILS_HPP
#define VALIDATION_UTILS_HPP

#include "mensagens.hpp"
#include "exceptions.hpp"
#include "Node.hpp"

// serve para a validação antes da criação da matriz 
namespace ValidationUtils {

    
    // faz a verificação da linha e coluna
    // antes da criação da matriz
    void verifyRowCol(int row, int col) {
        if(row <= 0){
            throw InvalidRowException(Mensagens::colNegative(row));
        }
        if(col <= 0){
            throw InvalidColumnException(Mensagens::colNegative(col));
        }
    }

    // faz verificação se Node é Valido 
    // vai ser implementado
    void vertfyValidRowCol(int row, int col){
        if (row <= 0) {
            throw InvalidRowException(Mensagens::invalidRowMessage(row)); // faz throw e chama mensagem de erro
        }
        if (col <= 0) {
            throw InvalidColumnException(Mensagens::invalidColumnMessage(col));
        }
    }

    
    
}

#endif
