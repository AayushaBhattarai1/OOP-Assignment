// Write a C++ program that swaps two variables without using a third variable.
// Sample Output:
// Input 1st number : 25
// Input 2nd number : 20
// After swapping the 1st number is : 20
// After swapping the 2nd number is : 25

#include <iostream>
using namespace std;

int main()
{
    int num1 = 40, num2 = 20;
    cout << "The value of variables before swapping num1 and num2 are: " << num1 << " and " << num2 << endl;

    num1 *= num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    cout << "The value of variables after swapping is num1: " << num1 << " and " << "num2: " << num2 << endl;
    return 0;
}