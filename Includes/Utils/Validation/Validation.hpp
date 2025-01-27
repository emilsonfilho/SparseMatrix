#ifndef VALIDATION_UTILS_HPP
#define VALIDATION_UTILS_HPP

#include "../../../Includes/Messages/Messages.hpp"
#include "../../Exceptions/InvalidColumnException.hpp"
#include "../../Exceptions/InvalidRowException.hpp"
#include "../../../Includes/Classes/Node/Node.hpp"

// serve para a validação antes da criação da matriz 
namespace ValidationUtils {
    // faz a verificação da linha e coluna
    // antes da criação da matriz
    void verifyRowCol(int row, int col);

    // faz verificação se Node é Valido 
    // vai ser implementado
    void verifyValidRowCol(int row, int col);
}

#endif
