#ifndef NO_MATRICES_EXCEPTION_HPP
#define NO_MATRICES_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class NoMatricesException : public std::logic_error {
public:
    /**
     * @brief Cria uma exceção sobre não haver matrizes no sistema para executar alguma ação
     * 
     * @param messagem Mensagem a ser exibida
     */
    explicit NoMatricesException(const std::string &message);
};

#endif