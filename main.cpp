

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

	int outer{1};

	while (outer <= 5)
	{

		int inner{1};

		while (inner <= outer)
		{
			cout << inner++ << ' ';
		}

		cout << '\n';

		++outer;
	}


	return 0;
}

/*


Output:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/
