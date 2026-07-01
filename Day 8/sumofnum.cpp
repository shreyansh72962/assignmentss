#include <iostream>
using namespace std;

int findSum(int value) {
    if (value <= 1) {
        return value;
    }
    return value + findSum(value - 1);
}

int main() {
    int n;
    cout << "Provide a number: ";
    cin >> n;
    
    int ans = findSum(n);
    cout << "Result: " << ans << endl;
    return 0;
}
