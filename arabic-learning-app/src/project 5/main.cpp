#include <iostream>
#include <string>
#include <cctype>
std::string toggleCase(const std::string& input) {
    std::string result = input;  // ‰‰”Œ «·‰’ «·√’·Ì
    for (size_t i = 0; i < result.size(); ++i) {
        if (std::islower(static_cast<unsigned char>(result[i]))) {
            result[i] = std::toupper(static_cast<unsigned char>(result[i]));
        }
        else if (std::isupper(static_cast<unsigned char>(result[i]))) {
            result[i] = std::tolower(static_cast<unsigned char>(result[i]));
        }
    }
    return result;
}
int main() {
    std::string text;
    std::cout << "enter : ";
    std::getline(std::cin, text);

    std::string toggled = toggleCase(text);
    std::cout << "end : " << toggled << "\n";

    return 0;
}
