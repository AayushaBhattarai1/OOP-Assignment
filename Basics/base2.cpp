// Write a C++ program to compute the number of days in a month for a given year and month.

#include <iostream>
using namespace std;

int main()
{
    int Days,User_Prompt_Year,User_Prompt_Month, LatestYear, LatestMonth;

    cout<<"Enter a year"<<endl;
    cin >> User_Prompt_Year;
    cout<<"Enter a month"<<endl;
    cin >> User_Prompt_Month;
    
    if (User_Prompt_Year <= 1 || User_Prompt_Month <=1)
    {
        cout<<"Total number of year is: 1"<<endl;
    }

    return 0;
}