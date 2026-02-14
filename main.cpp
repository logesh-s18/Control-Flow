

/*
https://www.learncpp.com/cpp-tutorial/introduction-to-loops-and-while-statements/

Question #3

Invert the nested loops example so it prints the following:

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1


*/

#include <iostream>

using namespace std;



int main() 
{

	int outer{ 5 };

	while (outer >= 1 ) // correction
	{

		// start inner counter equal to current outer value
		int inner{ outer };


		// print numbers from inner down to 1
		while (inner > 0) // correction
		{

			std::cout << inner-- << ' ';   // correction - using post increment

		}

		// move to next line after each row
		cout << '\n';

		--outer;   // decrease row count

	}

	return 0;
}

