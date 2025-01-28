#ifndef ARGUMENT_OUT_OF_RANGE_EXCEPTION_HPP
#define ARGUMENT_OUT_OF_RANGE_EXCEPTION_HPP

#include <stdexcept>
#include <string>

class ArgumentOutOfRangeException : public std::out_of_range {
public:
  explicit ArgumentOutOfRangeException(const std::string &message);
};

#endif
