#include <iostream>
using namespace std;

int main() {
    int val;
    long long result = 1;
    
    cout << "Enter n: ";
    cin >> val;
    
    for (int j = val; j > 0; j--) {
        result = result * j;
    }
    
    cout << "Result: " << result << endl;
    return 0;
}
