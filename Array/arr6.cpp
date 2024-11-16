// Find the smallest missing number in sorted array 
#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != i) {
            return i;
        }
    }
    return n;
}

int main() {
    int arr[] = {0, 1, 2, 6, 9, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findSmallestMissing(arr, n);
    cout << "Smallest missing element: " << missing << endl;
    return 0;
}