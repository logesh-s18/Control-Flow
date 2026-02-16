#include <iostream>
#include <vector>

void reset() { std::cout << "Resetting...\n"; }
void start() { std::cout << "Starting...\n"; }
void stop() { std::cout << "Stopping...\n"; }

constexpr int giveSomeNumber()
{
	//std::cout << "giveSomeNumber executed....\n";
	return 5;
}

int main() {


	int x = 5;


	switch (x)
	{
	case 1:break;
	case 2:break;
	case 4: break;
	case giveSomeNumber():
		std::cout << "giveSomeNumber executed....\n";
		break;

	case 7:
		std::cout << "Hi....\n";
		break;
	default:
		std::cout << "Nothing....";
		break;

		


	}

	return 0;
}