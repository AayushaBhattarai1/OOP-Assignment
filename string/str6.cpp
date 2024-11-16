// Remove a specific character from a given string 
#include <iostream>
using namespace std;

string removeChar(const string &str, char ch) {
    string result;
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    return result;
}

int main() {
    string input = "Filename";
    char toRemove = 'e';
    string output = removeChar(input, toRemove);
    cout << "Updated String: " << output << endl;
    return 0;
}