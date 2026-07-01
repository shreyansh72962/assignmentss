#include <iostream>
using namespace std;

long long findFactorial(int number) {
    long long f = 1;
    for (int k = number; k > 0; k--) {
        f = f * k;
    }
    return f;
}

int main() {
    int n;
    cout << "Please enter a value: ";
    cin >> n;
    
    long long ans = findFactorial(n);
    cout << "The factorial is " << ans << endl;
    
    return 0;
}
