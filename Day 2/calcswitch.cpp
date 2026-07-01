#include <iostream>
using namespace std;

int main() {
    int x, y;
    char math_op;
    
    cout << "Type expression (e.g., 5 + 3): ";
    cin >> x >> math_op >> y;
    
    switch (math_op) {
        case '+':
            cout << "Answer = " << (x + y) << endl;
            break;
        case '-':
            cout << "Answer = " << (x - y) << endl;
            break;
        case '*':
            cout << "Answer = " << (x * y) << endl;
            break;
        case '/':
            cout << "Answer = " << (float)x / y << endl;
            break;
        default:
            cout << "Operator not recognized." << endl;
            break;
    }
    
    return 0;
}
