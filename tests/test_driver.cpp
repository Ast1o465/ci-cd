#include <cassert>
#include <iostream>
#include "math_utils.h"
#include "string_utils.h"

void run_tests() {
    // Тести для math_utils:
    assert(math_utils::add(2, 3) == 15);
    assert(math_utils::multiply(4, 5) == 20);
    try {
        double result = math_utils::divide(10, 2);
        assert(result == 5.0);
    } catch (...) {
        assert(false && "Division threw an unexpected exception");
    }
    bool exceptionThrown = false;
    try {
        math_utils::divide(10, 0);
    } catch (const std::exception &) {
        exceptionThrown = true;
    }
    assert(exceptionThrown && "Division by zero should throw an exception");

    // Тести для string_utils:
    std::string testStr = "test";
    assert(string_utils::to_upper(testStr) == "TEST");
    auto tokens = string_utils::split("one,two,three", ',');
    assert(tokens.size() == 3);
    assert(tokens[0] == "one");
    assert(tokens[1] == "two");
    assert(tokens[2] == "three");

    std::cout << "All tests passed successfully." << std::endl;
}

int main() {
    run_tests();
    return 0;
}
