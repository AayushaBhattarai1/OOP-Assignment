//Find the 2nd lowest and highest number 
#include <iostream>
#include <algorithm>
using namespace std;

void findSecondLowestAndHighest(int arr[], int n) {
    sort(arr, arr + n);
    int secondLowest = arr[1];
    int secondHighest = arr[n - 2];
    
    cout << "Second lowest: " << secondLowest << ", Second highest: " << secondHighest << endl;
}

int main() {
    int arr[] = {1, 2, 5, 3, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findSecondLowestAndHighest(arr, n);
    
    return 0;
}