#include <iostream>


std::int64_t pow(int base, int exponent)
{
    std::int64_t total{ 1 };

    for (int i{ 0 }, t = 2; i < exponent; ++i) // init will only run one time
    {
        t *= base;
   
        total = t;
    }


    return total;
}

int main() {

    pow(2, 3);

}