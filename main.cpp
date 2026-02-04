
#include <iostream>
//using namespace std;



void calculate(int a, int b, char x)
{

	switch (x)
	{


		return; // this is ignored as this not fall under switch's scope as it's been before the very 1st case label
		break; // this is ignored as this not fall under switch's scope as it's been before the very 1st case label

		int cv; // definition allowed, determined when switch's scope starts

		cv = 100; // dead code (unreachable)

		//int cv = 28; this initialization not allowed

	case '+':
		cv = 8;
		std::cout << a + b;
		break;

	case '-':
		std::cout << a - b;
		break;

	case '*':
		std::cout << a * b;
		break;

	case '/':
		std::cout << a / b;
		break;

	case '%':
		std::cout << a % b;
		break;

	default:
		std::cout << "\nOperation symbol not valid !\n";

	}
	goto end;


end:; //Labels must attach to a statements. if the label is in end, then a ';' is required.

}

int getUserInput()
{
	int x;



	std::cout << "Please enter a digit : ";
	std::cin >> x;



	return x;



}


//--------------------- main ------------------

int main()
{
	int a{ getUserInput() };
	int b{ getUserInput() };


	// select the operator
	std::cout << "Enter the operation symbol : ";

	char opSymbol;

	std::cin >> opSymbol;

	//do the operation
	calculate(a, b, opSymbol);

	return 0;

}