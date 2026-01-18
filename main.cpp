#include <iostream>
using namespace std;



namespace sports::longJump
{
	constexpr int maxHeightAllowed{ 300 };
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

	if (int pH = playerHeight; pH <= maxHeightAllowed)
		std::cout << "\nim from if\n";
	else
		std::cout << "\nelse\n";

	
		
		
std::cout << "\nnot if\n\n";

}