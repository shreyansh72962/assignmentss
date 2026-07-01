#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Provide a word: ";
    cin >> word;
    
    map<char, int> tracker;
    for (char letter : word) {
        tracker[letter]++;
    }
    
    cout << "Result Data:\n";
    for (auto val : tracker) {
        cout << "'" << val.first << "' appears " << val.second << " times\n";
    }
    
    return 0;
}
