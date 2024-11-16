// Write a C++ program that reads an integer and prints its factorial.

#include <iostream>
#include <math.h>

// recursive function
int Factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}

// main function
int main()
{
    int factorial, num;
    std::cout << "Enter a number" << std::endl;
    std::cin >> num;

    factorial = Factorial(num);
    std::cout << "...........Result......." << std::endl;
    std::cout << "The factorial of the input number " << num << " is : " << factorial << std::endl;

    return 0;
}