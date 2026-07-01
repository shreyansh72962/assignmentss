#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string inputStr;
    cout << "Type a full sentence: ";
    getline(cin, inputStr);
    
    stringstream buffer(inputStr);
    string currentWord;
    map<string, int> dictionary;
    
    while (buffer >> currentWord) {
        dictionary[currentWord]++;
    }
    
    cout << "Output Counts:\n";
    for (auto data : dictionary) {
        cout << "[" << data.first << "] appears " << data.second << " times\n";
    }
    
    return 0;
}
