#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Please enter a number: ";
    cin >> value;
    
    if (value % 2 != 0) {
        cout << "The number is ODD" << endl;
    } else {
        cout << "The number is EVEN" << endl;
    }
    
    return 0;
}
