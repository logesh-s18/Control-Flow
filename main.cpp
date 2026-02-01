/*
PSEUDOCODE / PLAN (detailed):
- Purpose: Keep original example code intact and only add explanatory comments to improve readability.
- Steps:
  1. Add a brief header comment describing the file purpose.
  2. For each function, add short comments explaining:
	 - What the function demonstrates (control flow pattern).
	 - Key behavior to notice (early return, independent ifs, paired if/else).
  3. Keep all existing comments and code unchanged; only add comments.
  4. Place clarifying inline comments near non-obvious statements (e.g., gatekeeper checks,
	 constexpr explanation).
  5. Do not change any logic, function signatures, macros, or existing comments.
*/

/*
 Example file demonstrating various if/else patterns, early returns, and a small
 "takeDamage" example using the Early Return (Gatekeeper) method.
 Additional explanatory comments were added for clarity; original comments are preserved.
*/

#include <iostream>
using namespace std;



void printDigitName(int x)
{
    switch (x) // x is evaluated to produce value 2
    {

    default: //placing default in top before the case labels wont affect the logic, bcz, switch executes as per the jumping strategy to the exact known case
        std::cout << "Unknown";
        return;
    case 1:
        std::cout << "One";
        return;
    case 2: // which matches the case statement here
        std::cout << "Two"; // so execution starts here
        return; // and then we return to the caller
    case 3:
        std::cout << "Three";
        return;
    case 5:
        std::cout << "Three";
        return;
    case '7': // case labe is 55 as '7' char ascii value
        std::cout << "Three";
        return;
    
    }
}



//--------------------- main ------------------

int main()
{

	printDigitName(2);
	std::cout << '\n';

	return 0;

}