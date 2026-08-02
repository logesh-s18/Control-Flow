// Make sure that assert triggers even if we compile in release mode
#define NDEBUG

#undef NDEBUG
#include <cassert> // for assert
#include <iostream>

bool isPrime(int x)
{

	//as per the Prime logic, 0 & 1 are not in scope for Prime, since 0 will be undefined and 1 will be always divisible. 1 is considered to be unit number

	/*--- Perfect Guard Clause ---*/
	if (x <= 1)
		return false;


	// this loop is to check if numbers in - between 2 to 'x' got divisible
	// which prooves there will be another number which can divide the x than itself 
	
	/*---- Flawless Imposter Catching  ----*/
	for (int i = 2; i < x; ++i)
	{

		if ((x % i) == 0)
		{
			return false;
		}
	}

	//there is no divisible number gets true (i<x), then the next inc would be the number itself which is divisible, so we make it fals 
	// and skip loop, and return 'true' if no in-between nums found. its a PRIME

	/*--- 3. The Survivor ---*/
	return true;

}

int main()
{
	assert(!isPrime(0)); 
	assert(!isPrime(1));
	assert(isPrime(2)); 
	assert(isPrime(3));
	assert(!isPrime(4));
	assert(isPrime(5));
	assert(isPrime(7));
	assert(!isPrime(9));
	assert(isPrime(11));
	assert(isPrime(13));
	assert(!isPrime(15));
	assert(!isPrime(16));
	assert(isPrime(17));
	assert(isPrime(19));
	assert(isPrime(97));
	assert(!isPrime(99));
	assert(isPrime(13417));

	std::cout << "Success!\n";

	return 0;
}