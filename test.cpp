#include <iostream>
#include <cassert>

int main() {
    std::cout << "Running tests..." << std::endl;

    assert(true);

    const char *testMessage = R""""(
Test output line 1.
Test output line 2.
Test output line 3.
)"""";

    std::cout << testMessage << std::endl;
    return 0;
}
