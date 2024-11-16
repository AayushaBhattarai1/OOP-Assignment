#include <iostream>
using namespace std;

int digitSum(int num)
{
    while (num >= 10)
    {
        int sum = 0;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Repeated Digit Sum: " << digitSum(num) << endl;
    return 0;
}