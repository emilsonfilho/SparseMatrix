#include "../../../Includes/Utils/Tools/GetValidNumber.hpp"

int getValidNumber(const std::string &prompt, const IntValidatorArray validations) {
    int num = -1;

    while (true) {
        try {
            std::cout << prompt;

            if (!(std::cin >> num))
                throw InvalidArgumentException(
                    Messages::invalidArgumentForNumber());

            for (const auto& validate : validations) {
                validate(num);
            }

            break;
        } catch (const std::exception &e) {
            std::cout << e.what() << "\n";
            std::cin.clear();
            ignoreCin();
        }
    }

    ignoreCin();

    return num;
}