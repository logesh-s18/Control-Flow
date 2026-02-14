
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;

bool printLoop()
{
	std::cout << "Looping...";
	return true;
}


//void printUpto(int outer) // Function to print numbers from 1 to outer value
//{
//
//	int inner{ 1 }; // Initialize counter variable to 1
//
//	while (inner <= outer) // Loop while counter is less than or equal to outer
//	{
//		cout << inner << ' '; // Print current number with a space
//
//		++inner; // Increment counter
//	}
//
//}



int main() // Entry point of the program
{
 

	int count{ 1 };

	while (count <= 100)
	{
		//block condition for prefixing the 0s
		if (count < 10)
			cout << 0;


		//print numbers
		cout << count << ' ';


		//block condition for 10 divisible numbers to create a newline
		if (count % 10 == 0)
			cout << '\n';

		++count;

	}

    return 0; // Return 0 to indicate successful execution
}



/*


Logic :


- create a while statement to loop the repated actions, and inside the loop : 
	- need to prefix 0s for 1-9 with a condition check separate scope
	- print the numbers in main scope
	- again a if condition to check if the loop variable 'count' is div by 10 and print a newline which will look like table grid structure in terminal.
	- increment the count, otherwise the same value will cause infinite loop. we need to define a false logic inside loop's body to avoid infinite looping.

- return 0 for the main data type;



*/
