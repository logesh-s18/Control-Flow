
#include <iostream>
//using namespace std;



void printCats(bool skip)
{

	std::cout << "cats\n";
end:
	std::cout << "end of func\n";; // statement labels must be associated with a statement
}

//--------------------- main ------------------

int main()
{
	printCats(true);  // jumps over the print statement and doesn't print anything
	printCats(false);

}