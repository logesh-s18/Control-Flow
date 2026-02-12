
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


	if (printLoop());
		std::cout << "Hi, Im IF.... ";

	//while (printLoop()); // 
	//{
	//	std::cout << "Loop again (y/n?): ";
	//	char c;
	//	std::cin >> c;

	//	if (c == 'n') 
	//		return 0;

	//}

	std::cout << "done!";

	return 0;
}
