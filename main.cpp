

#include <iostream>

using namespace std;


int main()
{
	int i = 1;
	int count = 0;
	while (i < 3)
	{
		int j = 1;

		while (j < 3)
		{
			int k = 1;

			while (k < 3)
			{
				cout << "HI\n";
				++count;
				++k;
			}
			++count;

			++j;
		}

		++count;
		++i;

	}

	cout << "total : " << count;

	return 0;
}

