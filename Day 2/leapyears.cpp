#include <iostream>
using namespace std;

int main() {
    int inputYear;
    cout << "Provide a year: ";
    cin >> inputYear;
    
    if (inputYear % 4 != 0) {
        cout << "It is NOT a leap year." << endl;
    } else if (inputYear % 100 != 0) {
        cout << "It IS a leap year." << endl;
    } else if (inputYear % 400 != 0) {
        cout << "It is NOT a leap year." << endl;
    } else {
        cout << "It IS a leap year." << endl;
    }
    
    return 0;
}
