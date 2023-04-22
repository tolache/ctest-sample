#include <iostream>
#include <cassert>

void test_case_3() {
    int expected = 5;
    int actual = 3;
    if (expected != actual) {
        std::cerr << "Error: Expected " << expected << ", but got " << actual << "\n"
                  << "Test failed in file " << __FILE__ << " at line " << __LINE__ << "\n";
        std::exit(1);
    }
}

int main() {
    std::cout << "Running tests 3..." << std::endl;

    test_case_3();

    return 0;
}