#include <iostream>


int main() {


	int selection{};
<<<<<<< HEAD
	
	
	int i = 0;
	for (  ; i < 5; i++ )
=======

	do
>>>>>>> parent of 78c831c (8.10 — For statements - altering for loop 1)
	{
		std::cout << "Please make a selection: " << std::endl;
		std::cout << "1) Addition " << std::endl;
		std::cout << "2) Subtraction " << std::endl;
		std::cout << "3) Multiplication " << std::endl;
		std::cout << "4) Division " << std::endl;

		std::cin >> selection;
	} while (selection < 1 || selection > 4);

	std::cout << "you have entered: " << selection << std::endl;
}