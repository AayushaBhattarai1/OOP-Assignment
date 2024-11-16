// Find the largest word in the string 
#include <iostream>
#include <sstream>
using namespace std;

string findLargestWord(const string &str) {
    istringstream stream(str);
    string word, largest;
    
    while (stream >> word) {
        if (word.size() > largest.size()) {
            largest = word;
        }
    }
    
    return largest;
}

int main() {
    string input = "C++ is a general-purpose programming language.";
    string largestWord = findLargestWord(input);
    cout << "Largest Word: " << largestWord << endl;
    return 0;
}