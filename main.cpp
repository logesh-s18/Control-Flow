#include <iostream>

// Simulates a very fast function
void fastFunction()
{
    volatile long long sum{};

    for (int i = 0; i < 5'000'000; ++i)
    {
        sum += i;
    }
}

// Simulates a medium-speed function
void mediumFunction()
{
    volatile long long sum{};

    for (int i = 0; i < 50'000'000; ++i)
    {
        sum += i;
    }
}

// Simulates a slow function
void slowFunction()
{
    volatile long long sum{};

    for (int i = 0; i < 200'000'000; ++i)
    {
        sum += i;
    }
}

// Calls all three
void processData()
{
    fastFunction();
    mediumFunction();
    slowFunction();
}

int main()
{
    std::cout << "Program Started\n\n";

    processData();

    std::cout << "\nProgram Finished\n";

    return 0;
}