#include <cstdint>
#include <iostream>


void fizzbuzzpoo(int value)
{

	

	for (int i = 1; i <= value; ++i)
	{
		bool printed = false;

		if (i%3==0)
		{
			std::cout << "fizz";
			printed = true;
		}

		if (i % 5 == 0)
		{
			std::cout << "buzz";
			printed = true;
		}

		if (i % 7 == 0)
		{
			std::cout << "pop";
			printed = true;
		}

		

		if (!printed) 
		{
			std::cout << i;
		}

		std::cout << '\n';
		

	}



}


bool justPrint() {

	std::cout << "Running...\n";

	return true;

}
int justPr() {

	std::cout << "Running...\n";

	return 1;

}


int main()
{
	int count{ 0 }; // count how many times the loop iterates
	while (true)
	{
		std::cout << "Enter 'e' to exit this loop or any other character to continue: ";
		char ch{};
		std::cin >> ch;

		if (ch == 'e')
			break; //instead of above boolean flag to exit the loop, we use break
		else
		{
			++count;
			std::cout << "We've iterated " << count << " times\n";
		}
	}

}
