#include <iostream>
using namespace std;

int findFactorial(int value) {
    if (value == 0) {
        return 1;
    } else {
        return value * findFactorial(value - 1);
    }
}

int main() {
    int n;
    cout << "Provide an integer: ";
    cin >> n;
    
    int result = findFactorial(n);
    cout << "The factorial is " << result << endl;
    return 0;
}
