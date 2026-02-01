
#include <iostream>
//using namespace std;



void printDigitName(int x)
{
    switch (x) 
    {

    
    case 1:
        std::cout << "One";
        break;
    case 2: 
        std::cout << "Two"; 
        break; 
    case 3:
        std::cout << "Three";
        break;
    case 5:
        std::cout << "Three";
        [[fallthrough]];        // using this attribute, we say this fallthrough is intentional so other devs could acknowledge
    case '7': 
        std::cout << "Three";
        break;

    default: 
        std::cout << "Unknown";
        break;

    }

    std::cout << "Heloooo\n\n"; 
        
}



//--------------------- main ------------------

int main()
{

	printDigitName(1);
	std::cout << '\n';

	return 0;

}