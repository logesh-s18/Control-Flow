
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

	while (count <= 50)
	{
		// adding prefix'0' to 1-9 numbers
		if (count < 10)
		{
			std::cout << 0 << count << ' ';

		}


		//padding a new line whenever the end number is divisible by 10
		else if (count % 10 == 0)
		{
			std::cout << count << ' ';
			std::cout << '\n';
		}

		
		else if (count >= 10 && count % 10 != 0)
		{
			std::cout << count << ' ';
		}

		++count;

	}

    return 0;
}
