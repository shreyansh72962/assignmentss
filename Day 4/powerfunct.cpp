#include <iostream>
using namespace std;

long long getPower(int n, int p) {
    long long total = 1;
    for (int i = 0; i < p; i++) {
        total = total * n;
    }
    return total;
}

int main() {
    int num, exponent;
    cout << "Provide base number: ";
    cin >> num;
    cout << "Provide exponent: ";
    cin >> exponent;
    
    long long finalAns = getPower(num, exponent);
    cout << "Calculated value = " << finalAns << endl;
    
    return 0;
}
