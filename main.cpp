

/*
https://www.learncpp.com/cpp-tutorial/introduction-to-loops-and-while-statements/

Question #3

Invert the nested loops example so it prints the following:

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1


*/

#include <iostream>

using namespace std;



int main() 
{

    int row{ 5 };  // 5 rows in the theater

    while (row >= 1)  // clean from back row to front
    {
        int seat{ row };  // this row has 'row' number of seats to clean

        while (seat >= 1)
        {
            std::cout << "Clean seat " << seat << " ";
            --seat;  // move to next seat
        }

        std::cout << "\nRow finished\n\n";
        --row;  // move to next row
    }

	return 0;
}

