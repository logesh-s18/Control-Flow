#include <iostream>


// sample for return and break



int returnNum()
{

    while (true)
    {
        std::cout << "Enter b for break or r for return : ";

        char value{};

        std::cin >> value;


        if (value == 'r')
            return 1;


       
        if (value == 'b')
        {
            std::cout << "we broke and left \n";
            break;
        }

    }

    return 0;
}




int main()
{
    int returnValue{ returnNum()};

    std::cout << "The action made is " << returnValue << '\n';

    return 0;
}