#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputStr;
    string vowels = "aeiouAEIOU";
    int total = 0;
    
    cout << "Please type a string: ";
    getline(cin, inputStr);
    
    for (int j = 0; j < inputStr.length(); j++) {
        if (vowels.find(inputStr[j]) != string::npos) {
            total++;
        }
    }
    
    cout << "Vowels count: " << total << endl;
    return 0;
}
