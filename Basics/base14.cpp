#include <iostream>
#include <ctime>
using namespace std;

int daysBetween(int y1, int m1, int d1, int y2, int m2, int d2)
{
    tm date1 = {0, 0, 0, d1, m1 - 1, y1 - 1900};
    tm date2 = {0, 0, 0, d2, m2 - 1, y2 - 1900};
    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);
    int result = abs(difftime(time2, time1) / (60 * 60 * 24));
    return result;
}

int main()
{
    int y1, m1, d1, y2, m2, d2;
    cout << "Enter two dates (YYYY MM DD): ";
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    cout << "Days: " << daysBetween(y1, m1, d1, y2, m2, d2) << endl;
    return 0;
}