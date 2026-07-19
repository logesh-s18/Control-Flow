#include<iostream>



void fizbuzbump(int value)
{


	for (int i = 1; i <= value; ++i)
	{

		bool printed = false;


		if ((i % 3) == 0)
		{
			std::cout << "fiz";
			printed = true;

		}

		if ((i % 5) == 0)
		{
			std::cout << "buz";
			printed = true;

		}

		if ((i % 7) == 0)
		{
			std::cout << "bump";
			printed = true;

		}

		if (!printed)
		{
			std::cout << value;
		}

		std::cout << "\n";


	}


}


int main()
{

	int value{};

	std::cout << "Enter the Value : ";

	std::cin >> value;

	fizbuzbump(value);



	return 0;
}