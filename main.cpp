
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;


//EXITING NESTED LOOP EARLY - GOTO IS USEFUL HERE!

int main()
{
	for (int i = 1; i < 5; ++i) {
		for (int j = 1; j < 5; ++j) {
			std::cout << i << " * " << j << " is " << i * j << '\n';

			// If the product is divisible by 9, jump to the "end" label
			if (i * j % 9 == 0) {
				std::cout << "Found product divisible by 9. Ending early.\n";
				goto end;
			}
		}
		std::cout << "Incrementing the first factor.\n";
	}

end:
	std::cout << "And we're done." << '\n';

	return 0;
	

}
