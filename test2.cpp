#include <iostream>
#include <cassert>

void test_case_5() {
    assert(true);

    const char *test1Message = R""""(
Test 1 output line 1.
Test 1 output line 2.
Test 1 output line 3.
)"""";

    std::cout << test1Message << std::endl;
}

void test_case_6() {
    int a = 5, b = 7;
    assert(a + b == 12);

    const char *test2Message = "Test 2 output line 1.";

    std::cout << test2Message << std::endl;
}

void test_case_7() {
    assert(true);

    const char *test3Message = R""""(
Test 3 output line 1.
Test 3 output line 2.
Test 3 output line 3.
)"""";

    std::cout << test3Message << std::endl;
}

void test_case_8() {
    int c = 5, d = 7;
    assert(c + d == 12);

    const char *test4Message = "Test 4 output line 1.";

    std::cout << test4Message << std::endl;
}

int main() {
    std::cout << "Running tests 2..." << std::endl;

    test_case_5();
    test_case_6();
    test_case_7();
    test_case_8();

    return 0;
}
