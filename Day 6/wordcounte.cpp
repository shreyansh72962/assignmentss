#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int wCount = 1;
    
    cout << "Provide a string: ";
    getline(cin, sentence);
    
    if (sentence.length() == 0) {
        wCount = 0;
    } else {
        for (int i = 0; i < sentence.length() - 1; i++) {
            if (sentence[i] == ' ' && sentence[i + 1] != ' ') {
                wCount++;
            }
        }
    }
    
    cout << "Words found: " << wCount << endl;
    return 0;
}
