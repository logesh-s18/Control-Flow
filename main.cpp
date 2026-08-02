#include <iostream>

// Simulates a very fast function
// Worker function (leaf function)
void fastFunction()
{
    volatile long long sum{};

    for (int i = 0; i < 5'000'000; ++i)
    {
        sum += i;
    }
}

// Simulates a medium-speed function
// Worker function (leaf function)
void mediumFunction()
{
    volatile long long sum{};

    for (int i = 0; i < 50'000'000; ++i)
    {
        sum += i;
    }
}

// Simulates a slow function
// Worker function (leaf function)
void slowFunction()
{
    volatile long long sum{};

    for (int i = 0; i < 200'000'000; ++i)
    {
        sum += i;
    }
}

// Calls all three
// Orchestrator Function (Caller)
// Delegates work to helper/worker functions.
void processData()
{
    fastFunction();     // child; leaf function
    mediumFunction();   // child; leaf function
    slowFunction();     // child; leaf function
}




int main() // program entry point; caller; parent function
{
    std::cout << "Program Started\n\n";

    processData(); //caller; orchestrator;

    std::cout << "\nProgram Finished\n";

    return 0;
}