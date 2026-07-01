#include <iostream>
using namespace std;

int main() {
    int val, ans = 0;
    cout << "Please type a number: ";
    cin >> val;
    
    while (val > 0) {
        int rem = val % 10;
        ans = (ans * 10) + rem;
        val = val / 10;
    }
    
    cout << "The reverse is " << ans << endl;
    return 0;
}
