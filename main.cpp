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
		int x = 10; //local scope, dies when if condition ends
	else
	{							
		int x = 20; //local scope, dies when else condition ends

	}

	std::cout << x; //here still the x will not be changed, bcz, x not get scoped into condition body. there was a redeclaration and redefinition happened
					//which is to be considered as if/else body scope. new 'x' scope ends within it. 


}