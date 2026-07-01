#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string textData;
    cout << "Provide string: ";
    cin >> textData;
    
    map<char, int> freq;
    for (char x : textData) {
        freq[x]++;
    }
    
    bool match = false;
    for (char x : textData) {
        if (freq[x] == 1) {
            cout << "Result -> " << x << endl;
            match = true;
            break;
        }
    }
    
    if (!match) {
        cout << "None found." << endl;
    }
    
    return 0;
}
