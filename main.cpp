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

	int x{};

	if (playerHeight <= maxHeightAllowed) //namespace usuage type 3
		x = 10; //now, this x was from 'main's scope which will die once 'main' ends and not 'if' ends. this is redefinition alone, not a redeclaration+redef
	else
	{							
		x = 20; //now, this x was from 'main's scope which will die once 'main' ends and not 'else' ends. this is redefinition alone, not a redeclaration+redef

	}

	std::cout << x; // now the 'x' value will be changed as the scope of 'x' value was altered (redef) inside if/else body


}