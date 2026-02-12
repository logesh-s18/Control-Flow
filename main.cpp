
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;

bool printLoop()
{
	std::cout << "Looping...";
	return true;
}

int main()
{
 
    int count{ 1 };

    //Unintentionally placing a semicolon after the condition of a while-loop is a good way to hang your program.
   
   //while (count <= 10); // terminal will be empty. we might think there isnt loop happens, but its happening and not visible
    { // GOES AS SEPARATE BLOCK
        std::cout << count << ' ';
        ++count;
    }

    if (printLoop()); // if snag

    std::cout << "done!\n";

    return 0;
}
