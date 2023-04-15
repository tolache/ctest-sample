#include <iostream>
#include <cassert>

int main(int argc, char** argv) {
    std::cout << "Running test " << argv[1] << "..." << std::endl;

    if (argv[1][0] == '1') {
        assert(true);
        std::cout << "Test 1 passed." << std::endl;
    }
    else if (argv[1][0] == '2') {
        assert(false);
        std::cout << "Test 2 failed." << std::endl;
    }

    return 0;
}