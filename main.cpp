#include <iostream>



namespace constants
{
	constexpr double gravity = 9.8;
}


double getTwrHeight()
{
	std::cout << "Enter the height (meters) : ";

	double twrHeight{};

	std::cin >> twrHeight;

	return twrHeight;
}


double getCurrentBallHeight(double twrHeight, int seconds)
{

	double fallenDistance = (constants::gravity * (seconds * seconds)) / 2;

	double currentBallHeight = twrHeight - fallenDistance;

	if (currentBallHeight < 0.0)
		return 0.0;

	return currentBallHeight;

}


void printBallHeight(double currentBallHeight, int seconds)
{

	if (currentBallHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the Ball is " << currentBallHeight << " meters away to reach Ground \n";
	else
		std::cout << "At " << seconds << " seconds, the Ball is on ground \n";


}

double calcAndPrintBallHeight(double twrHeight, int seconds)
{

	double currentBallHeight{getCurrentBallHeight(twrHeight, seconds)};

	printBallHeight(currentBallHeight, seconds);



	return currentBallHeight;
}


int main()
{

	double twrHeight{getTwrHeight()};

	int seconds{0};


	while (calcAndPrintBallHeight(twrHeight, seconds) > 0.0)
	{
		++seconds;
	}



}