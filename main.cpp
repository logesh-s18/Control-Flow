#include <iostream>
#include <string>
using namespace std;


int main()
{
	//int* hvalue = new int;

	//cout << "hvalue & " << &hvalue << endl;
	//cout << "hvalue dref " << *hvalue << endl;

	//auto hval = std::make_unique<int>(42);

	//delete hvalue;

	//cout << "after del hvalue is " << &hvalue;
	//cout << "after del hvalue dref is " << *hvalue;

		int x = 19;
		int* ptr = new int (23);        // ptr -> x
		int** ptr1 = &ptr;    // ptr1 -> ptr -> x
		int*** ptr2 = &ptr1;

	cout << "x = " << x << '\n';
	cout << "ptr (address of x) = " << ptr << ", *ptr = " << *ptr << '\n';
	cout << "ptr1 (address of ptr) = " << ptr1 << ", *ptr1 = " << *ptr1 << ", **ptr1 = " << **ptr1 << '\n';




	//{
	//	auto hval = std::make_unique<int>(42);
	//	// set breakpoint here, inspect memory — see the 42
	//	
	//	
	//	int* hvalue = new int;
	//}
	//cout << "after del hvalue dref";



}