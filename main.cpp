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

	
	
	namespace spLngJmp = sports::longJump;  //namespace usuage type 3

	using namespace spLngJmp;   //namespace usuage type 3

	
	
	//playerHeight validation

	if (playerHeight <= maxHeightAllowed) //namespace usuage type 3
		cout << "Valid :) \n\n";
	else
		cout << "Not Valid :( \n";
		cout << "Please GET OUT -_- \n\n";



}