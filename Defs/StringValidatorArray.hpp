#ifndef STRING_VALIDATOR_ARRAY_HPP
#define STRING_VALIDATOR_ARRAY_HPP

#include <functional>
#include <vector>
#include <string>

using StringValidatorArray = std::vector<std::function<void(const std::string &)>>;

#endif