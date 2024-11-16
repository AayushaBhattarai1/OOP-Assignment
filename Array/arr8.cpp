// Find the two repeating elements 
#include <iostream>
#include <unordered_set>
using namespace std;

void findTwoRepeating(int arr[], int n) {
    unordered_set<int> seen;
    cout << "Repeating elements: ";
    
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            cout << arr[i] << " ";
        } else {
            seen.insert(arr[i]);
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findTwoRepeating(arr, n);
    
    return 0;
}