

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
	//giving the column heading for terminal before the loop

	char a = 'a';

	char z = 'z';


	//using 'a' as looping variable where the loop start and end depends on.

	while (a <= z) // here the comparision will happen based on their ASCII. so the iteration until it reaches 'z' ASCII, loop condition will be true.
	{
		//im printing the alphabets and casting the char's int value to explicitly print the ASCII values too. bcz, char wont print ASCII, it will print the original character value
		cout << a << " - " << static_cast<int>(a) << '\n';
		


		++a; // incrementing the ASCII which goes for next alphabet's ASCII



	}

	return 0;
}