
#include <iostream>
//using namespace std;



void calculate(int a, int b, char x)
{
	switch (x)
	{

	case '+':
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
	; //  these are known as explicit NULL statements
	;
	;
	;
	;
	;
	;
	;
	;
	std::cin >> opSymbol;

	//do the operation
	calculate(a, b, opSymbol);

	return 0;

}