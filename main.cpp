
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;



void gotoCheck()
{

	goto beforeEnd;

	std::cout << "Enter the age : ";

	int age;

	std::cin >> age;

	if (age < 18)
	{
		cout << "entered name is not valid !";

	beforeEnd:
		std::print("\nwe are at label - 'beforeEnd:' \n\n");
		cout << "\ninitiating jump to end....\n";\

		goto end; //this will directly move to 'end' label even its in diff scope, it bypasses it

		

		{ //block scope var init

			int pan = 1998;
		}// var dies here, not in statement label scope, so no problem for fwd jmp



		if (!age) // Bypassing Conditional Blocks by goto 
		{ 

		end:  // This label jump is technically possible and will execute as long as it does not skip the initialization of a variable that is still active (in scope) at the target label's location.
			
			std::print("\nwe are at label - 'end:' \n\n");
			cout << "\nentered to (!age) condition\n";
			cout << "\nending....\n";
			goto close;

		}

	}

close:
	std::print("\nwe are at label - 'close:' \n\n");
	cout << "\n		 <<<<<< Closed >>>>>		 \n"; 
	

}

//--------------------- main ------------------

int main()
{
	gotoCheck();  // jumps over the print statement and doesn't print anything
	

}


/* 
	OUTPUT : 
--------------------------------------------------------


we are at label - 'beforeEnd:'


initiating jump to end....

we are at label - 'end:'


entered to(!age) condition

ending....

we are at label - 'close:'


<<<<<< Closed >>>>>


--------------------------------------------------------
*/