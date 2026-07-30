#include <iostream>

/*

formula: distance fallen = gravity_constant * x_seconds2 / 2

REAL PHYSICS FORMULA = distance = (initial_velocity * time) + (gravity * time * time / 2.0)
*/



namespace Constant
{
	const double gravity = 9.8;
}


double getHeightOfTwr()
{
	std::cout << "Enter the height of the tower in meters: ";

	double value{};

	std::cin >> value;

	return value;

}


void printBallHeight(double currentBallHeight, int sec)
{
	

	// -ve resembles how deep inside into ground the ball went. we dont need that, just say its in ground
	if (currentBallHeight < 0)
	{
		std::cout << "At " << sec << " second/s, the ball is on Ground \n";
		return;
	}

	std::cout << "At " << sec << " second/s, the ball is at height : " << currentBallHeight << " meter/s \n" ;

}


void calcAndPrint(double TwrHeight, int sec)
{


	//formula: distance fallen = gravity_constant * x_seconds2 / 2
	double distanceFallen = (Constant::gravity * (sec * sec)) / 2.0;

	double currentBallHeight = TwrHeight - distanceFallen;

	printBallHeight(currentBallHeight, sec);

}

int main()
{
	//get the height from user
	double heightOfTwr{ getHeightOfTwr() };

	calcAndPrint(heightOfTwr, 0);
	calcAndPrint(heightOfTwr, 1);
	calcAndPrint(heightOfTwr, 2);
	calcAndPrint(heightOfTwr, 3);
	calcAndPrint(heightOfTwr, 4);
	calcAndPrint(heightOfTwr, 5);

	return 0;

}