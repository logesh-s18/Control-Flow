
#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs

using namespace std;



int main()
{
 
	int count{ 11 };

	while (count <= 10)
	{
		std::cout << count << " ";
		
		++count;		//in main scope. incrementing this for the next iteration. otherwise, the same count value will be checked by while for the second iteration which will make it always 'true' without no change in the value will cause infinite looooooop
		
	}

	std::cout << "done!";

	return 0;
}
