#include <iostream>
using namespace std;

int calculateGCD(int val1, int val2) {
    int gcd = 1;
    int limit = (val1 < val2) ? val1 : val2;
    
    for (int i = 1; i <= limit; i++) {
        if (val1 % i == 0 && val2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int a, b, result;
    cout << "Provide two numbers separated by a space: ";
    cin >> a >> b;
    
    result = calculateGCD(a, b);
    cout << "The GCD of given numbers is " << result << endl;
    
    return 0;
}
