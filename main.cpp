#include <iostream>
#include <vector>

void reset() { std::cout << "Resetting...\n"; }
void start() { std::cout << "Starting...\n"; }
void stop() { std::cout << "Stopping...\n"; }

int main() {
    // A manual jump table using function pointers
    void (*jumpTable[])() = { reset, start, stop };

    int cmd = 1;

    //uncomment & comment, watch the behavior of how it changes to function address and variables
    
    //int reset = 1;
    //int start = 1;
    //int stop = 1;

    // Direct O(1) access: no "if" or "switch" needed!
    if (cmd >= 0 && cmd <= 2) {
        jumpTable[cmd]();
    }

    return 0;
}