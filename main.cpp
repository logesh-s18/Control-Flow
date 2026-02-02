
#include <iostream>
//using namespace std;



void printDigitName(int x)
{
    const int num = 7;

    switch (x)
    {
        int a; // okay: definition is allowed before the case labels

    case 1:
        int y; // okay but bad practice: definition is allowed within a case
        y = 1; // okay: assignment is allowed
        break;
    case 2:
        int y;
        y = 4; // okay: y was declared above, so we can use it here too
        break;

    case 3:
        break;
    
    case num: // variable should be compile time integral
        break;

    }
        
}



//--------------------- main ------------------

int main()
{

	printDigitName(2);
	std::cout << '\n';

	return 0;

}