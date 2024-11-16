// Find the word with the most repeated letters 
#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

int countMaxRepeatedLetters(const string &word) {
    unordered_map<char, int> freq;
    int maxCount = 0;
    
    for (char ch : word) {
        freq[ch]++;
        maxCount = max(maxCount, freq[ch]);
    }
    
    return maxCount;
}

string findWordWithMaxRepeatedLetters(const string &str) {
    istringstream stream(str);
    string word, result;
    int maxRepeated = 0;
    
    while (stream >> word) {
        int repeated = countMaxRepeatedLetters(word);
        if (repeated > maxRepeated) {
            maxRepeated = repeated;
            result = word;
        }
    }
    
    return result;
}

int main() {
    string input = "Print a welcome text in a separate line.";
    string result = findWordWithMaxRepeatedLetters(input);
    cout << "Word with the highest number of repeated letters: " << result << endl;
    return 0;
}