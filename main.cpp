#include <iostream>
using namespace std;



void fizzbuzzpop(int value)
{
	for (int i = 1; i <= value; ++i)
	{
		bool flag = false; //flag


		//ordewising the conditions based on output to happen sequentially
		if ( i % 3 == 0)
		{
			cout << "fizz";
			flag = true;
		}

		if ( i % 5 == 0)
		{
			cout << "buzz";
			flag = true;
		}

		if ( i % 7 == 0)
		{
			cout << "pop";
			flag = true;
		}

		if (!flag)
		{
			cout << i;
		}

		cout << '\n';

	}
		
}



int main()
{
	cout << "please enter the number :";


	int value;

	cin >> value;

	fizzbuzzpop(value);

	return 0;

}