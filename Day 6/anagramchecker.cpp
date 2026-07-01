#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkAnagram(string a, string b) {
    int len1 = a.length();
    int len2 = b.length();
    if (len1 != len2) return false;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for (int k = 0; k < len1; k++) {
        if (a[k] != b[k]) return false;
    }
    return true;
}

int main() {
    string wordA, wordB;
    cout << "Type two words to compare: ";
    cin >> wordA >> wordB;
    
    if (checkAnagram(wordA, wordB)) {
        cout << "They are anagrams of each other." << endl;
    } else {
        cout << "They are not anagrams." << endl;
    }
    
    return 0;
}
