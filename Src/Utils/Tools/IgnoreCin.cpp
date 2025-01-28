#include "../../../Includes/Utils/Tools/IgnoreCin.hpp"

void ignoreCin() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}