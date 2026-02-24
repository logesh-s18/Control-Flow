#include <iostream>


int main() {


	int selection{};
	
	
	int i = 0;

	bool isTrue = i < 5;

	for (  ; isTrue; )
	{
		std::cout << "Please enter a number between 1 and 5: \n";
		i++;
	}

	std::cout << "you have entered: " << selection << std::endl;
}