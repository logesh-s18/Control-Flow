
#include <iostream>
using namespace std;


void fizzbuzz(int count)
{
	for (int i = 1; i <= count; ++i)
	{

		bool printed{false};

		if (i % 3 == 0)
		{
			cout << "fizz";
			printed = true;
		}

		if (i % 5 == 0)
		{
			cout << "buzz";
			printed = true;
		}

		if (i % 7 == 0)
		{
			cout << "pop";
			printed = true;
		}

		if (!printed)
		{
			cout << i;
		}

		cout << '\n';
	}
}

int main()
{
	fizzbuzz(150);

	return 0;
}