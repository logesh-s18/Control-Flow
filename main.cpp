

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

    // 1. "Outer loop ennan kudukrom, 5"
    int outer{ 5 };

    // 2. "0 reach aagrapo condition false la irukanum"
    while (outer >= 1)
    {
        // 3. "ulla iruka column... iteration value angaium irukum"
        // (Outer 5 na Inner 5, Outer 4 na Inner 4)
        int inner{ outer };

        while (inner >= 1)
        {
            std::cout << inner-- << ' '; //two 'inner' statement create panradhuku badhila single ah vechu post dec op vechukalam. current value um print aagum, next iteration kaga dec um work aagum
        }

        std::cout << '\n';

        // 4. "outer ra decrease panite vandhu finish panrom"
        --outer;
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
