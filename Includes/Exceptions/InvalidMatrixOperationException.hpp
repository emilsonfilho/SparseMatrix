#ifndef INVALID_MATRIX_OPERATION_EXCEPTION_HPP
#define INVALID_MATRIX_OPERATION_EXCEPTION_HPP

#include <stdexcept>

class InvalidMatrixOperationException : public std::runtime_error {
public:
    explicit InvalidMatrixOperationException(const std::string &message);
};

#endif