
#include <iostream>
//using namespace std;



bool printDigitName(char x)
{
    const int num = 7;

    switch (x)
    {
    case 'a': // if c is 'a'
    case 'e': // or if c is 'e'
    case 'i': // or if c is 'i'
    case 'o': // or if c is 'o'
    case 'u': // or if c is 'u'
    case 'A': // or if c is 'A'
    case 'E': // or if c is 'E'
    case 'I': // or if c is 'I'
    case 'O': // or if c is 'O'
    case 'U': // or if c is 'U'
        return true;
    default:
        return false;

    }
        
}



//--------------------- main ------------------

int main()
{

	printDigitName('a');
	std::cout << '\n';

	return 0;

}