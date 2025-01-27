#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#include <string>
#include <sstream>

// Mensagens que são lançadas por exeptions
namespace Messages {
    const std::string invalidRowMessage(int row) {
        std::ostringstream os;
        os << "Linha invalida: " << row;
        return os.str();
    }

    const std::string invalidColumnMessage(int col) {
        std::ostringstream os;
        os << "Linha invalida: " << col;
        return os.str();
    }

    const std::string colNegative(int col) {
        std::ostringstream os;
        os << "A linha " << col << " e negativa";
        return os.str();
    }

    const std::string rowNegative(int row) {
        std::ostringstream os;
        os << "A linha " << row << " e negativa";
        return os.str();
    }

    const std::string colZero() {
        return "A coluna não pode ser zero";
    }

    const std::string rowZero() {
        return "A linha não pode ser zero";
    }
}

#endif
