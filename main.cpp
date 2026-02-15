

/*
https://www.learncpp.com/cpp-tutorial/introduction-to-loops-and-while-statements/

Question #4

Now make the numbers print like this:

		1
	  2 1
	3 2 1
  4 3 2 1
5 4 3 2 1

*/

#include <iostream>

using namespace std;


int main()
{

	int rows{ 1 };

	while (rows <= 5)
	{

		int cols{ 5 }; // explicitly giving bcz we know that it needs 5 columns and also number need to be printed when rows is same or less while decrementing from 5

		while (cols > 0) // which means, to make this false, we need to dec the loop variable
		{

			// for eg: if row 2 means, while iterating to scan nums and to print, print the number only when the col iteration is == or less than the rows as we decrementing from 5 to 1
			if (cols <= rows) 
				cout << cols << ' ';
			else //for any number which is greater than row, than we print space
				cout << " " << ' ';

			--cols;  // decrementing to scan from 5 to 1 for each row iteration

		}

		cout << '\n';

		++rows;
	}

	return 0;
}

/*


Output:

		1
	  2 1
	3 2 1
  4 3 2 1
5 4 3 2 1


*/
