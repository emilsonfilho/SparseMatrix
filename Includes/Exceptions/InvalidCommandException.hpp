#ifndef INVALID_COMMAND_EXCEPTION_HPP
#define INVALID_COMMAND_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class InvalidCommandException : public std::runtime_error {
public:
  explicit InvalidCommandException(const std::string &message);
};

#endif