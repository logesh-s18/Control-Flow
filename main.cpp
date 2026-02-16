#include<iostream>
using namespace std;

int main()

{

	int row{1}; 


	while (row <=5) // the Clock of iteration
	{
		int col{ 5 }; 
		

		while (col > 0) //the Scanner of column positions
		{
			if (col <= row) // the Filter
				cout << col << " ";
			else
				cout << " " << " ";

			--col;

		}

		cout << '\n';

		++row;
	}


	return 0;
}