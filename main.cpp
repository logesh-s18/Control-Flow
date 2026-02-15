

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

    int outer{ 1 };

    while (outer <= 5)
    {
       
        //total rows
        int totalRows = 5;

        int inner{ (totalRows + 1) - outer}; 

        if (inner == 0)
            std::cout << inner-- << '0';

        while (inner > 0)
        {
            std::cout << inner-- << ' '; 
        }

        

        std::cout << '\n';

        ++outer;
    }


	return 0;
}


/*


Output:

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1


*/
