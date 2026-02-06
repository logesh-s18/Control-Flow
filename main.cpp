
#include <iostream>
using namespace std;



void printCats(bool skip)
{

//tryAgain:

	std::cout << "Enter the age : ";

	int age;

	std::cin >> age;

	if (age < 18)
	{
		cout << "entered name is not valid !";
		goto end; //this will directly move to 'end' label even its in diff scope, it bypasses it

		{
			int pan = 1998;
		}

		if (!age) // Bypassing Conditional Blocks by goto 
		{ 

		end:  // This label jump is technically possible and will execute as long as it does not skip the initialization of a variable that is still active (in scope) at the target label's location.
			
			cout << "\n !age \n"; 

		}

	}

}

//--------------------- main ------------------

int main()
{
	printCats(true);  // jumps over the print statement and doesn't print anything
	printCats(false);

}