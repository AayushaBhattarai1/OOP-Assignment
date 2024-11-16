// Find the largest element in array 
#include <iostream>
#include <algorithm>
using namespace std;

void findKLargest(int arr[], int n, int k) {
    sort(arr, arr + n, greater<int>());
    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 23, 12, 9, 30, 2, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    findKLargest(arr, n, k);
    return 0;
}