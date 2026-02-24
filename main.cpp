#include <iostream>


int main() {

    std::cout << "--- Risk of using '!=' ---\n";

    // Scenario: We want to stop at 10, but we increment by 3
    // i will go: 0, 3, 6, 9, 12, 15... it MISSES 10!

    /* for (int i = 0; i != 10; i += 3) {
        std::cout << i << " ";
        // WARNING: This would be an infinite loop!
    }
    */

    std::cout << "--- Safety of using '<' ---\n";

    // Same logic, but with a boundary check
    for (int i = 0; i < 10; i += 3) {
        std::cout << "Current i: " << i << "\n";
    }

    std::cout << "\nLoop ended safely because 12 is NOT less than 10.";

    return 0;

}