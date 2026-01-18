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

	std::cout << "ififwithearlyreturn starts...\n";

	//eventhought this all if's are independent, it will exit early as early return is declared. early return in independent if acts as if/else

	if (a);
		return 'a';
	if (b)
		return 'b';
	if (c)
		return 'c';


	std::cout << "ififwithearlyreturn ends...\n";

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


// 1. Before: The "Arrow Code" Method (Deep Nesting)
void takeDamageNested(bool isAlive, int& health, bool shieldActive, int damage) 
{
	if (isAlive) {
		if (health > 0) {
			if (!shieldActive) {
				health -= damage;
				std::cout << "Nested Logic: Damage Taken! Health: " << health << "\n";
			}
		}
	}
}



int main()
{
	// Shared Data
	bool playerIsAlive{ true };
	int playerHealth{ 100 };
	bool playerShieldActive{ false };
	int incomingDamage{ 40 };

	// Testing Nested
	takeDamageNested(playerIsAlive, playerHealth, playerShieldActive, incomingDamage);


	return 0;

}