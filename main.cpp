#include <iostream>

using namespace std;

int main()
{

	for (char x = 'a'; x < 'z';) {

		cout << x;

		for (int i = 0 ; i<3; i++)
		{


			cout << i;

			x++;
		}

		cout << '\n';
		
	}


	return 0;
}