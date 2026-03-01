#include <iostream>


int main() {

    for (int x{ 0 }, y{ 9 }, c{23}; x < 10, y >= 0, c > 0; ++x, --y, c--)
        std::cout << x << ' ' << y << ' ' << c << '\n';

    return 0;

}