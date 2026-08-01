#include <iostream>

/*

formula: distance fallen = gravity_constant * x_seconds2 / 2

REAL PHYSICS FORMULA = distance = (initial_velocity * time) + (gravity * time * time / 2.0)
*/



namespace Constant
{
	constexpr double gravity = 9.8;
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
	if (currentBallHeight > 0)
		std::cout << "At " << sec << " seconds, the ball is at height: " << currentBallHeight << " meters \n";
	else // if currentBallHeight goes negative 
		std::cout << "At " << sec << " seconds, the ball is on Ground \n";
}




double getCurrentBallHeight(double twrHeight, int seconds)
{


	//formula: distance fallen = gravity_constant * x_seconds2 / 2
	double distanceFallen = (Constant::gravity * (seconds * seconds)) / 2.0;

	double currentBallHeight = twrHeight - distanceFallen;

	if (currentBallHeight < 0.0)
		return 0.0;

	//if not ground, no above return
	return currentBallHeight;

}



double calcAndPrintBallHeight(double twrHeight, int sec)
{

	// we need to collect current ball height after every secs it falls down, to find balance distance it needs to reach ground
	double currentBallHeight{ getCurrentBallHeight(twrHeight, sec) };

	// final output print msg
	printBallHeight(currentBallHeight, sec);

	//After priting msg, return the current height to loop
	return currentBallHeight;

}


int main()
{
	//get the height from user
	const double twrHeight{ getHeightOfTwr() };


	// my approach : for loop
	
	// condition = if current height returned from loop is still not 0, then inc the secs, 
	// if the current height is 0, then stop the loop
	//for (int sec = 0; currentHeightOfTwr > 0; ++sec)
	//{
	//	currentHeightOfTwr = calcAndPrintBallHeight(twrHeight, sec);
	//}




	// official approach : while loop

	int seconds{0};

	// directtly use the function in condition which returns currentBallHeight, with that we can 
	// do the condition check if its still in air or not. 
	while ((calcAndPrintBallHeight(twrHeight, seconds) > 0.0))
	{
		++seconds;
	}

	return 0;

}