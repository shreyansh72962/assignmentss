#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Type a string to check: ";
    cin >> text;
    
    int len = text.length();
    int flag = 0;
    
    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
        cout << "It is a Palindrome." << endl;
    else
        cout << "It is NOT a Palindrome." << endl;
        
    return 0;
}
