#include <iostream>
using namespace std;

int main() {
    int max_val;
    cout << "Please enter N: ";
    cin >> max_val;
    
    int x = 1;
    if (max_val >= 1) {
        do {
            cout << x << " ";
            ++x;
        } while (x <= max_val);
    }
    cout << endl;
    
    return 0;
}
