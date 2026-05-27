#include <cstdint>
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


std::int64_t pow(int base, int exp)
{
    int64_t total{1};

    for (int i = 0; i < exp; ++i)
        total *= base;


    return total;

}



int main()
{
   
   


    int base = 2;
    int exp = 10;

    std::cout << "Finding the total value of base " << base << " and exp " << exp << " \n";

    int totalValue = pow(base,exp);

    std::cout << totalValue;


    std::cout << "\n\n\n";
}