#include <iostream>
using namespace std;

int main() {
    int val;
    cout << "Please type an integer: ";
    cin >> val;
    
    if (val < 0) {
        cout << val << " is a negative number" << endl;
    } else {
        if (val == 0) {
            cout << val << " is zero" << endl;
        } else {
            cout << val << " is a positive number" << endl;
        }
    }
    
    return 0;
}
