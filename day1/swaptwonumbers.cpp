#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter value A: ";
    cin >> a;
    cout << "Enter value B: ";
    cin >> b;
    
    // Swapping without temp variable
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "Values swapped! A = " << a << " | B = " << b << endl;
    return 0;
}
