#include <iostream>
using namespace std;



namespace sports::longJump
{
	constexpr int maxHeightAllowed {154};
}


int main()
{


	cout << "Hi there, welcome to Miami Atheloo Day!!!\n\n" 
		    
			"Please enter your height here (in cm) : ";

	int playerHeight;

	cin >> playerHeight;

	cout << "\n\nYour Height " << playerHeight << " is ";

	
	
	//namespace LJ = sports::longJump;  //namespace usuage type 1

	using namespace sports::longJump;   //namespace usuage type 2

	//playerHeight validation

	if (playerHeight <= maxHeightAllowed) //namespace usuage type 2
		cout << "Valid :) \n\n";
	else
		cout << "Not Valid :( \n\n";




}