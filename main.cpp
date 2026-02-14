

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

    int table{ 5 };  // 5 tables to serve

    while (table >= 1)
    {
        int plate{ table };  // number of plates for this table

        while (plate >= 1)
        {
            std::cout << "Serve plate " << plate << " at table " << table << '\n';
            --plate;  // next plate
        }

        std::cout << "Table " << table << " completed\n\n";
        --table;  // move to next table
    }

	return 0;
}

