

#include <iostream>

using namespace std;


int main()
{

	int rows{ 1 };

	while (rows <= 5)
	{

		int cols{ 5 };

		while (cols > 0) 
		{

			if (cols > rows)
				cout << " " << ' ';
			else 
				cout << cols << ' ';

			--cols; 

		}

		cout << '\n';

		++rows;
	}

	return 0;
}

