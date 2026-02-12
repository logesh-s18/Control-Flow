
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;

bool printLoop()
{
	std::cout << "Looping...";
	return true;
}

int main()
{
 
    int count{ 1 };
    while (count <= 10) // this is an infinite loop
        ;               // whose body is a null statement

    { // this is no longer associated with the while loop
        std::cout << count << ' ';
        ++count;
    }

    std::cout << "done!\n";

    return 0;
}
