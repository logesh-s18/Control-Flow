#include <iostream>
#include <cassert>


bool isPrime(int dividend)
{


	if (dividend <=1)
		return false; //Not a PRIME

	for (int divisor = 2; divisor < dividend; ++divisor)
	{

		if ((dividend % divisor) == 0)
			return false; //Not a PRIME
	}

	return true; // its a PRIME - after all that way, if divisor in for loop cant be divided, then dividend by itself can be divided.



	
}


int main()
{

	assert(isPrime(2));
	assert(isPrime(3));
	assert(!isPrime(4));
	assert(isPrime(43));
	assert(isPrime(67));
	assert(isPrime(97));
	assert(!isPrime(24));
	assert(!isPrime(22));
	assert(!isPrime(77));
	assert(!isPrime(99));
	assert(!isPrime(57));
	assert(isPrime(83));

	std::cout << "success !!!\n";



	return 0;

}