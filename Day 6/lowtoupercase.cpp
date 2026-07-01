#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Please type here: ";
    getline(cin, s);
    
    for (char &c : s) {
        if (islower(c)) {
            c = toupper(c);
        }
    }
    
    cout << "Output -> " << s << endl;
    return 0;
}
