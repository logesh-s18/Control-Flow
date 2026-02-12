
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

	while (count <= 100)
	{
		// adding prefix'0' to 1-9 numbers
		if (count < 10)
		{
			std::cout << '0';

		}

		std::cout << count << ' ';

		//if the loop variable is divisible by 10, print a newline
		if (count % 10 == 0)
		{
			std::cout << '\n';
		}

		// increment the loop counter
		++count;

	}

    return 0;
}
