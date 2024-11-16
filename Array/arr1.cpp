// /Count the Number of Occurrences of a given number in a sorted array

#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    
    int count = countOccurrences(arr, n, x);
    cout << "Number of occurrences of " << x << ": " << count << endl;
    
    return 0;
}