#include <iostream>
using namespace std;




void ifelse(bool a, bool b, bool c)
{

	std::cout << "ifelse starts...\n";

	//this all if's with else are paired with eachother. one true condition is enough and others will be ignored.

	if (a)
		std::cout << "a\n";
	else if (b)
		std::cout << "b\n";
	else if (c)
		std::cout << "c\n";


	std::cout << "ifelse ends...\n";

}


char ififwithearlyreturn(bool a, bool b, bool c)
{

	std::cout << "ifwithreturn starts...\n";

	//eventhought this all if's are independent, it will exit early as early return is declared. early return in independent if acts as if/else

	if (a)
		return 'a';
	if (b)
		return 'b';
	if (c)
		return 'c';


	std::cout << "ifwithreturn ends...\n";

}


void ifif(bool a, bool b, bool c)
{
	std::cout << "ifif starts...\n";

	//this all if's are independently checked

	if (a)
		std::cout << "a\n";
	if (b)
		std::cout << "b\n";
	if (c)
		std::cout << "c\n";

	std::cout << "ifif ends...\n";

}



int main()
{
	ifelse(true,true,false);
	ifif(true,true,false);
	ififwithearlyreturn(true,true,false);

	return 0;

}