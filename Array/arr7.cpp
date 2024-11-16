// Find the 3rs largest string 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string findThirdLargestString(vector<string> &v) {
    sort(v.begin(), v.end(), greater<string>());
    return v.size() >= 3 ? v[2] : "";
}

int main() {
    vector<string> v = {"apple", "banana", "cherry", "date", "elderberry"};
    
    string thirdLargest = findThirdLargestString(v);
    if (!thirdLargest.empty()) {
        cout << "Third largest string: " << thirdLargest << endl;
    } else {
        cout << "Array doesn't have enough elements." << endl;
    }
    
    return 0;
}