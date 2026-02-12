
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
 
    unsigned int count{ 10 }; // note: unsigned

    // count from 10 down to 0
    while (count >= 0)   //  It starts out by printing 10 9 8 7 6 5 4 3 2 1 blastoff! as desired, but then loop variable count overflows
    {
        if (count == 0)
        {
            std::cout << "blastoff!";
        }
        else
        {
            std::cout << count << ' ';
        }
        --count;
    }

    std::cout << '\n';

    return 0;
}
