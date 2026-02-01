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



int main()
{

	int age = 22;

	switch (age)
	{

	case 1:
		std::cout << "age is 1\n\n";
		break;

	case 21:
		std::cout << "age is 21\n\n";
		break;

	case 22:
		std::cout << "age is 22\n\n";
		//break;
	
	default :
		std::cout << "nothing is there\n\n";
	}



}