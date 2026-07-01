#include <iostream>
using namespace std;

int main() {
    double celsiusValue;
    cout << "Please input temperature (C): ";
    cin >> celsiusValue;
    
    cout << "Converted to (F): " << (celsiusValue * 9.0 / 5.0) + 32 << endl;
    
    return 0;
}
