// Find the largest 3 elements 
#include <iostream>
#include <algorithm>  // for sort()
using namespace std;

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        cout << "Array should have at least three elements." << endl;
        return;
    }
    sort(arr, arr + n, greater<int>());
    cout << "The largest three elements are: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestThree(arr, n);
    return 0;
}