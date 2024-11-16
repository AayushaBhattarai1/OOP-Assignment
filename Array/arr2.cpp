// Find the first repeating element 
#include <iostream>
#include <unordered_set>
using namespace std;

int findFirstRepeating(int arr[], int n) {
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];
        }
        seen.insert(arr[i]);
    }
    return -1;  // Return -1 if no repeating element is found
}

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int firstRepeating = findFirstRepeating(arr, n);
    if (firstRepeating != -1) {
        cout << "First repeating element: " << firstRepeating << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }
    return 0;
}