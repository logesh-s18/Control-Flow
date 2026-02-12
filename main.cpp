
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;



int main()
{
 
	int count{ 1 };

	while (count <= 10)
	{
		std::cout << count << " "; // having the same value without changing it for while condition check will create infinite loop
	}

	std::cout << "done!";

	return 0;
}
