#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#include <sstream>
#include <string>

// Mensagens que são lançadas por exeptions
namespace Messages {
std::string invalidRowMessage(int row);

std::string invalidColumnMessage(int col);

std::string colNegative(int col);

std::string rowNegative(int row);

std::string colZero();

std::string rowZero();

std::string invalidCommandMessage();
} // namespace Messages

#endif
