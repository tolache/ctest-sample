#include <iostream>
#include <cassert>

void test_case_1();
void test_case_2();
void test_case_3();
void test_case_4();

int main() {
    std::cout << "Running tests 2..." << std::endl;

    test_case_1();
    test_case_2();
    test_case_3();
    test_case_4();

    return 0;
}

void test_case_1() {
    assert(true);

    const char *test1Message = R""""(
Test 1 output line 1.
Test 1 output line 2.
Test 1 output line 3.
)"""";

    std::cout << test1Message << std::endl;
}

void test_case_2() {
    int a = 5, b = 7;
    assert(a + b == 12);

    const char *test2Message = "Test 2 output line 1.";

    std::cout << test2Message << std::endl;
}

void test_case_3() {
    assert(true);

    const char *test3Message = R""""(
Test 3 output line 1.
Test 3 output line 2.
Test 3 output line 3.
)"""";

    std::cout << test3Message << std::endl;
}

void test_case_4() {
    int c = 5, d = 7;
    assert(c + d == 12);

    const char *test4Message = "Test 4 output line 1.";

    std::cout << test4Message << std::endl;
}
//
// Created by Anatoly.Cherenkov on 2023-04-16.
//
