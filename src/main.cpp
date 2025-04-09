#include <iostream>
#include "math_utils.h"
#include "string_utils.h"

int main() {
    std::cout << "=== Math Operations ===" << std::endl;
    std::cout << "5 + 3 = " << math_utils::add(5, 3) << std::endl;
    std::cout << "5 * 3 = " << math_utils::multiply(5, 3) << std::endl;
    try {
        std::cout << "10 / 2 = " << math_utils::divide(10, 2) << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Error in division: " << e.what() << std::endl;
    }

    std::cout << "\n=== String Operations ===" << std::endl;
    std::string sample = "hello world";
    std::cout << "Original: " << sample << std::endl;
    std::cout << "Uppercase: " << string_utils::to_upper(sample) << std::endl;
    auto tokens = string_utils::split(sample, ' ');
    std::cout << "Split: ";
    for (const auto& token : tokens)
        std::cout << token << " ";
    std::cout << std::endl;
    
    return 0;
}
