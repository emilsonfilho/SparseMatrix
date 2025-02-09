#include "../../../Includes/Utils/Complements/FormatOperationOrigin.hpp"

std::string formatOperationOrigin(const std::string &op,
                                  const std::string &first,
                                  const std::string &second) {
  return op + " de " + first + " por " + second;
}