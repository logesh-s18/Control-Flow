
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;

bool printLoop()
{
	std::cout << "Looping...";
	return true;
}


void printUpto(int outer) // Function to print numbers from 1 to outer value
{

	int inner{ 1 }; // Initialize counter variable to 1

	while (inner <= outer) // Loop while counter is less than or equal to outer
	{
		cout << inner << ' '; // Print current number with a space

		++inner; // Increment counter
	}

}

int main() // Entry point of the program
{
 
	int outer{ 1 }; // Initialize outer loop counter to 1

	while (outer <= 5) // Loop 5 times (print 5 rows)
	{

		printUpto(outer); // Print numbers from 1 to outer value

		cout << '\n'; // Print newline to move to next row

		++outer; // Increment outer counter

	}

    return 0; // Return 0 to indicate successful execution
}
