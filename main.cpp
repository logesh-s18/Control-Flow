#include <iostream>


int main() {

	for (int x{ 0 }, y{ 9 }; y <= 0, x < 10; ++x, --y) //right side loop variable dominates the left side loop variable
        std::cout << x << ' ' << y << '\n';

    return 0;

}