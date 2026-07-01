#include <iostream>
using namespace std;

int calcFibonacci(int val) {
    if (val == 0) return 0;
    if (val == 1) return 1;
    return calcFibonacci(val - 1) + calcFibonacci(val - 2);
}

int main() {
    int n;
    cout << "Please enter the limit: ";
    cin >> n;
    
    for (int k = 0; k < n; ++k) {
        cout << calcFibonacci(k) << "\t";
    }
    cout << endl;
    
    return 0;
}
