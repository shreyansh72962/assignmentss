#include <iostream>
#include <string>
using namespace std;

void revStr(string &s, int left, int right) {
    if (left >= right) {
        return;
    }
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    
    revStr(s, left + 1, right - 1);
}

int main() {
    string word;
    cout << "Please type here: ";
    getline(cin, word);
    
    revStr(word, 0, word.length() - 1);
    cout << "Reversed form -> " << word << endl;
    
    return 0;
}
