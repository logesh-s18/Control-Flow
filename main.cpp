
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;



int main()
{
 
	int count{ 1 };

	while (true) // Intentional infinite loops
	{
		//way to exit an infinite loop

		std::cout << "Loop again (y/n?): ";
		char c;
		std::cin >> c;

		if (c == 'n') // you can use == to compare a char with its ASCII value too
			return 0;

	}

	std::cout << "done!";

	return 0;
}
