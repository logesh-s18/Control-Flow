#include <iostream>
#include <string>
using namespace std;


int main()
{
	int* hvalue = new int;

	cout << "hvalue & " << &hvalue << endl;
	cout << "hvalue dref " << *hvalue << endl;

	auto hval = std::make_unique<int>(42);

	delete hvalue;

	cout << "after del hvalue is " << &hvalue;
	cout << "after del hvalue dref is " << *hvalue;




	//{
	//	auto hval = std::make_unique<int>(42);
	//	// set breakpoint here, inspect memory — see the 42
	//	
	//	
	//	int* hvalue = new int;
	//}
	//cout << "after del hvalue dref";



}