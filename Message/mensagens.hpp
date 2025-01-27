#ifndef MENSAGENS_HPP
#define MENSAGENS_HPP

#include <string>
// Mensagens que são lançadas por exeptions
namespace Mensagens {
    const std::string invalidRowMessage(int row) {
        return "Linha inválida: " + std::to_string(row);
    }

    const std::string invalidColumnMessage(int col) {
        return "Coluna inválida: " + std::to_string(col);
    }

    const std::string colNegative(int col){
        return "A linha " + std::to_string(col) + " e negativa";
    }

    const std::string rowNegative(int row){
        return "A linha " + std::to_string(row) + " e negativa";
    }
}

#endif
