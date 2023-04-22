#include <iostream>
#include <cassert>

void test_case_5() {
    int a = 5, b = 7;
    assert(a + b == 12);

    const char *test2Message = "Test 2 output line 1.";

    std::cout << test2Message << std::endl;
}

int main() {
    std::cout << "Running tests 2..." << std::endl;

    test_case_5();

    return 0;
}
