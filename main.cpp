
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

	while (count <= 100)
	{


		//add '0' if the number are from 1 to 9 
		if (count < 10)
			cout << '0';

		
		//print the count numbers
		cout << count << ' ';


		//padding after a number divisible by 10 comes
		if (count % 10 == 0)
		{
			cout << '\n';
		}

		//inc the counter
		++count;

	}

    return 0;
}
