// Write a C++ program to add up all the digits between two given integers. Add all the
// digits between 11 and 16 and it should be inclusive of the two numbers.
// Example: Add up all the digits between 39 and 41 is: 21
// Sample Data
// (5, 9) -> 35
// (12, 18) -> 42
// (39, 41) -> 21

#include <iostream>
using namespace std;

int Addup(int n)
{
    int SumOfNumbers = 0;
    while (n > 0)
    {
        SumOfNumbers += n % 10;
        n /= 10;
    }
    return SumOfNumbers;
}

int main()
{
    int start = 12, end = 19, sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += Addup(i);
    }

    cout << "Add up all the digits between "<<start<<" and "<<end<< " is: "<< sum << endl;

    return 0;
}