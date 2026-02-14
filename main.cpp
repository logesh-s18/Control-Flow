

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

		int inner{ outer };

		while (inner <= outer && inner > 0)
		{

			cout << inner << ' ';

			--inner;

		}

		cout << '\n';

		--outer;

	}

	return 0;
}

