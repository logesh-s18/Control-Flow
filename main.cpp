
#include <iostream>
//using namespace std;



void printDigitName(char x)
{

	switch (x)
	{
	//intentional fallthrough
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		std::cout << "Its an vowel\n";
		break;
	
	default:
		std::cout << "Its NOT an vowel\n";
   }

        
}



//--------------------- main ------------------

int main()
{

	printDigitName(' ZA'); // char only consider last letter
	std::cout << '\n';

	return 0;

}