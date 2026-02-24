#include <iostream>


int main() {


	for (int i{ 1 }; i <= 10; ++i) // here the 'i' is only visible in the scope of the for loop, so it cannot be used outside of it
    {
        std::cout << i << ' ';

    }

    int i = 17;

    do {

		++i; //end expression is evaluated before the condition is checked, so the loop will execute at least once

    } while (i < 10);

    std::cout << '\n';

    return 0;


}