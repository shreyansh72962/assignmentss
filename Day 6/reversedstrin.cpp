#include <iostream>
#include <string>
using namespace std;

int main() {
    string original;
    string reversed = "";
    
    cout << "Please enter text: ";
    getline(cin, original);
    
    for (char c : original) {
        reversed = c + reversed;
    }
    
    cout << "Output: " << reversed << endl;
    return 0;
}
