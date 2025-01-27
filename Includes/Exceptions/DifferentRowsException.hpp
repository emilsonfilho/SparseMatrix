#ifndef DIFFERENT_ROWS_EXCEPTION_HPP
#define DIFFERENT_ROWS_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class DifferentRowsException : public std::runtime_error {
public:
    DifferentRowsException(const std::string &message);
};

#endif