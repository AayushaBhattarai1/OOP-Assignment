#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cout << "Cube of " << i << " is " << i * i * i << endl;
    }
    return 0;
}