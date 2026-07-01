#include <iostream>
using namespace std;

int getPower(int num, int p) {
    if (p == 0) return 1;
    if (p == 1) return num;
    return num * getPower(num, p - 1);
}

int main() {
    int n, exp;
    cout << "Provide base number: ";
    cin >> n;
    cout << "Provide exponent: ";
    cin >> exp;
    
    cout << "Calculated value = " << getPower(n, exp) << endl;
    return 0;
}
