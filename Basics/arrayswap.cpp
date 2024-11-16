// Write a C++ program to swap the first and last digits of any number.
// Sample Output:
// Input any number: 12345
// The number after swapping the first and last digits are: 52341

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, firstDigit, lastDigit, digits, swappedNum;

    cout << "Input any number: ";
    cin >> num;

    lastDigit = num % 10;

    digits = num;
    while (digits >= 10)
    {
        digits /= 10;
    }
    firstDigit = digits;

    swappedNum = num - firstDigit * (int)pow(10, (int)log10(num));

    swappedNum = lastDigit * (int)pow(10, (int)log10(num)) + swappedNum % (int)pow(10, (int)log10(num));
    swappedNum = swappedNum - lastDigit + firstDigit;

    cout << "The number after swapping the first and last digits is: " << swappedNum << endl;

    return 0;
}