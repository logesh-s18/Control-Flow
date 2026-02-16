#include <iostream>
#include <vector>

void reset() { std::cout << "Resetting...\n"; }
void start() { std::cout << "Starting...\n"; }
void stop() { std::cout << "Stopping...\n"; }

int main() {
  

    int x = 2;


    switch (x)
    {
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
        std::cout << "Hi....\n";

    default:
        std::cout << "Nothing....";


        //Hi....
        //Nothing....
        //both will be printed in the side effect of fallthtough


    }

    return 0;
}