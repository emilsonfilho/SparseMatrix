#ifndef NO_MATRICES_EXCEPTION_HPP
#define NO_MATRICES_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class NoMatricesException : public std::logic_error {
public:
    explicit NoMatricesException(const std::string &message);
};

#endif