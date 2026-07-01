#include <iostream>
#include <string>
using namespace std;

int verifyPalindrome(string str, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (str[start] == str[end]) {
        return verifyPalindrome(str, start + 1, end - 1);
    }
    return 0;
}

int main() {
    string s;
    cout << "Type a string to check: ";
    cin >> s;
    
    int result = verifyPalindrome(s, 0, s.length() - 1);
    
    if (result == 1)
        cout << "It is a Palindrome." << endl;
    else
        cout << "It is NOT a Palindrome." << endl;
        
    return 0;
}
