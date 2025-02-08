#include "../../../Includes/Utils/Tools/GetValidString.hpp"

std::string getValidString(const std::string &prompt, const StringValidatorArray validations) {
    std::string str;

    while (true) {
        try {
            std::cout << prompt;
            getline(std::cin, str);
            str = trim(str);

            for (const auto& validate : validations) {
                validate(str);
            }

            break;
        } catch (const std::exception &e) {
            std::cout << e.what() << "\n";
            std::cin.clear();
        }
    }

    return str;
}