#include <iostream>
#include <cassert>

void test_case_1() {
    assert(true);

    const char *test1Message = R""""(
Test 1 output line 1.
Test 1 output line 2.
Test 1 output line 3.
)"""";

    std::cout << test1Message << std::endl;
}

int main() {
    std::cout << "Running tests 1..." << std::endl;

    test_case_1();

    return 0;
}
