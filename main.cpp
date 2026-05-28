#include <cstdint>
#include <iostream>




int main()
{
    int x{ 0 };
    
    unsigned int y{ 8 };

    for (; x < 10; ++x, --y)
        std::cout << x << ' ' << y << '\n';

    return 0;
}