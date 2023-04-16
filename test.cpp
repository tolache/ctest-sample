#include <iostream>
#include <cassert>

int main() {
    std::cout << "Running tests..." << std::endl;

    // Test 1
    assert(true);

    const char *test1Message = R""""(
Test 1 output line 1.
Test 1 output line 2.
Test 1 output line 3.
)"""";

    std::cout << test1Message << std::endl;

    // Test 2
    int a = 5, b = 7;
    assert(a + b == 12);

    const char *test2Message = R""""(
Test 2 output line 1.
)"""";

    std::cout << test2Message << std::endl;

    // Test 3
    assert(true);

    const char *test3Message = R""""(
Test 3 output line 1.
Test 3 output line 2.
Test 3 output line 3.
)"""";

    std::cout << test1Message << std::endl;

    // Test 4
    int a = 5, b = 7;
    assert(a + b == 12);

    const char *test4Message = R""""(
Test 4 output line 1.
)"""";

    std::cout << test2Message << std::endl;

    return 0;
}