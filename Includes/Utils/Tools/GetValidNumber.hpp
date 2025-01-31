#ifndef GET_VALID_NUMBER_HPP
#define GET_VALID_NUMBER_HPP

#include <iostream>
#include <string>

#include "IgnoreCin.hpp"
#include "../../../Defs/IntValidatorArray.hpp"
#include "../../../Includes/Exceptions/InvalidArgumentException.hpp"
#include "../../../Includes/Messages/Messages.hpp"

/**
 * @brief Lê um inteiro válido do usuário
 * 
 * Essa função entra em loop infinito a menos que o usuário digite algo válido.
 * Algo é definido como válido no parâmetro qeu recebe uma série de vaidações dadas do programa, tornando-a flexível para vários casos.
 * I.e., sempe sairá daqui um vaor válido.
 * Ademais, essa função só lida com pedido de inteiros.
 * Se preciso for uma função que lê outro valor, outra função deve ser criada.
 * 
 * @param prompt A mensagem pegruntando o que se quer do usuário
 * @param validations Uma série de validações que indicarão se a resposta dada é válida
 */
int getValidNumber(const std::string &prompt, const IntValidatorArray validations);

#endif