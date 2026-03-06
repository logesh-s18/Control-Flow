/*



Question #2

Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.

For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.



Hint: 

Use a non-loop variable to accumulate the sum as you iterate from 1 to the input value, 
much like the pow() example above uses the total variable to accumulate the return value each iteration.



*/




#include <iostream>

using namespace std;




void sumTo(int value)
{
	//initial total will be 0, and if the user gives '0' it doesnt enters the loop, and returns '0'
	int total = 0;



	//init from 1 bcz thats the possible start of adding the values
	for (int i = 1; i <= value; ++i)
	{

		total += i; //total saves the iteration value and adding the next time and the condition based on start anyways in 1 + 2 + .... n. so its ok.


	}

	cout << "and the Total : " << total ;


}


int main()
{
	// getting the value from user
	cout << "Please enter the value you want to sum up : ";

	int value;

	cin >> value;

	sumTo(value);


	return 0;
}