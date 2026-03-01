#include <iostream>


std::int64_t pow(int base, int exponent)
{
    std::int64_t total{ 1 };

    for (int i{ 0 }; i < exponent; ++i) // init will only run one time
    {
        total *= base;
    }


    return total;
}

int main() {

    for (int i{ 0 }; i < 10; ++i) // uses <, still terminates
    {
        std::cout << i;
        if (i == 9) ++i; // jump over value 10
    }

    for (int i{ 0 }; i != 10; ++i) // uses !=, infinite loop
    {
        std::cout << i;
        if (i == 9) ++i; // jump over value 10
    }

}