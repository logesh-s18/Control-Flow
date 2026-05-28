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

int main()
{
	//std::cout << "enter a number : ";

	//int value{};

	//std::cin >> value;

	//fizzbuzzpoo(value);


	int iterations = 0;
	for (int x = 0; x < 10; ) {
		for (int y = 0; y < 3; ++y) 
		{
			++x; //Loop variable hijacking - from outer loop
		}
		iterations++;
	}



}