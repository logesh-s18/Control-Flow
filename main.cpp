

/*
https://www.learncpp.com/cpp-tutorial/introduction-to-loops-and-while-statements/

Question #2

Write a program that prints out the letters a through z along with their ASCII codes. Use a loop variable of type char.


Hint: To print characters as integers, you have to use a static_cast.


*/

#include <iostream>

using namespace std;



int main() 
{

	//simple, no need to create a variable for 'z'

	char myChar{ 'a' };
	while (myChar <= 'z')
	{
		std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
		++myChar;
	}

	return 0;
}

