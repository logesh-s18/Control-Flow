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

#define PASS


// Demonstrates chained if/else-if where only the first true condition runs.
void ifelse(bool a, bool b, bool c)
{

	std::cout << "ifelse starts...\n";

	//this all if's with else are paired with eachother. one true condition is enough and others will be ignored.

	// Note: Because of the else-if chaining, only one branch can execute.
	if (a)
		std::cout << "a\n";
	else if (b)
		std::cout << "b\n";
	else if (c)
		std::cout << "c\n";


	std::cout << "ifelse ends...\n";

}


// Demonstrates multiple independent ifs with early returns.
// Important: Although the if statements are independent, the first matching
// if causes an immediate return which prevents subsequent checks.
// This makes the sequence behave similarly to an if/else chain when a return is used.
char ififwithearlyreturn(bool a, bool b, bool c)
{

	std::cout << "ififwithearlyreturn starts...\n";

	//eventhought this all if's are independent, it will exit early as early return is declared. early return in independent if acts as if/else

	if (a)
		return 'a';
	if (b)
		return 'b';
	if (c)
		return 'c';


	std::cout << "ififwithearlyreturn ends...\n";

	// Note: Original code does not return a value here if none of the conditions match.
	// This is left intentionally unchanged to preserve original behavior (may be undefined).
}


// Demonstrates fully independent if statements — each condition is checked regardless of others.
void ifif(bool a, bool b, bool c)
{
	std::cout << "ifif starts...\n";

	//this all if's are independently checked

	// Each of these can run; multiple lines may be printed.
	if (a)
		std::cout << "a\n";
	if (b)
		std::cout << "b\n";
	if (c)
		std::cout << "c\n";

	std::cout << "ifif ends...\n";

}


//  After: The "Early Return" Method (Flat Logic)
//  Example of the Gatekeeper pattern: check preconditions early and return on failure.
//  This keeps the "main logic" flat and focused.
void takeDamageEarlyReturn(bool isAlive, int& health, bool shieldActive, int damage)
{
	// Gatekeeper: Check restrictions/failure cases first (Negative First)
	if (!isAlive || health <= 0) return; // nothing to do if dead or zero health
	if (shieldActive) return;            // shield blocks damage

	// Main Logic: Flat and clean
	health -= damage;
	std::cout << "Early Return Logic: Damage Taken! Health: " << health << "\n";
}



void foo(int x, int y)
{
	if (x > y)
	{
		PASS; // PASS is an empty macro; placeholder for real logic
	}
	else
	{
		PASS;
	}
}

int giveanum()
{
	return 1;
}

int main()
{
	constexpr bool isTrue = true;

	// The comment below explains the constexpr behavior used in this example.
	if (isTrue)  // constexpr var and non-constant if statement will be treated as constexpr if statement as it have constand value and will be compile time
	{
		// This uses the C++17 "if (init; condition)" form where a variable is initialized
		// inside the if statement. Here it demonstrates scope-limited initialization.
		if (bool isOk = false; isOk)
		{

			for (int i = 0; i < 10; i++)
			{
				std::cout << "Hi\n";

			}
		}
	}
	else
	{

		std::cout << "Nothing here\n";
	}

#if log // #if is a Preprocessor Macro (dumb text-cutter; doesn't check for errors).

	dsfsfwrr
		r344
		we
		wr
		fwewpl[fwkofdkopfwdkp
		]

		int o = "dkdkdk";  // wrong implementation in c++, but compiler didnt throwed any error, bcz its in #if (currently false)

#endif
}