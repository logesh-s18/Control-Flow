#include<iostream>
using namespace std;

unsigned g_state;

void seedPRNG(unsigned seed)
{
	g_state = seed;

}


unsigned int LCG16()
{

	g_state = 12358 * g_state + 1230;

	return g_state % 2163;

}


void print10()
{

	for (int i = 1; i <= 3; ++i) // this loop for how many rows i want to generate 10 PRNGs
	{

		cout << i << " row running----\n";

		for (int j = 1; j <= 10; ++j) // generate 10 PRNGs
		{

			cout << LCG16() << "\t";

		}

		cout << '\n';

	}


}



int main()
{
	unsigned int x{};
	std::cout << "Enter a seed value: ";
	std::cin >> x;

	seedPRNG(x); // seed our PRNG
	print10();   // generate 10 random values

	return 0;

}