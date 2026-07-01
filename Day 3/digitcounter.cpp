#include <iostream>
using namespace std;

int main() {
    int val;
    int digits = 0;
    
    cout << "Provide an integer: ";
    cin >> val;
    
    do {
        digits++;
        val /= 10;
    } while (val != 0);
    
    cout << "Digit count is " << digits << endl;
    return 0;
}
