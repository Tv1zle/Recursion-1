#include <iostream>


int Fibonachi(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }


    return Fibonachi(number - 1) + Fibonachi(number - 2);
}


int main()
{
    int number;
    std::cin >> number;


    std::cout << Fibonachi(number);
}
