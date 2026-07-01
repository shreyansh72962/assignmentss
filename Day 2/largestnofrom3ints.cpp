#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    cout << "Enter value for z: ";
    cin >> z;
    
    if (x >= y) {
        if (x >= z)
            cout << x << " is the largest." << endl;
        else
            cout << z << " is the largest." << endl;
    } else {
        if (y >= z)
            cout << y << " is the largest." << endl;
        else
            cout << z << " is the largest." << endl;
    }
    
    return 0;
}
