
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;



int main()
{
 
	int count{ 1 };


	//It is common to see this kind of loop in web server applications that run continuously and service web requests.

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
