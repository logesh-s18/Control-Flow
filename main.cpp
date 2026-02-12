
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
    while (count >= 0)
    {
       
        std::cout << count;
       
        --count; // since the 'count' var is unsigned, while after 0, -- decrement, gives again a larger unsigned number due to its data type behavior which doesnt have negative numbers
    }

    std::cout << '\n';

    return 0; // you can duplicate many return in same function scope but remaing will be dead code
    return 0;
    return 0;
    return 0;
    return 0;
    return 0;

    return 0;
}
