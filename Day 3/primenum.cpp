#include <iostream>
using namespace std;

int main() {
    int val;
    cout << "Please enter a number: ";
    cin >> val;
    
    int div = 2;
    int flag = 0;
    
    if (val <= 1) {
        flag = 1;
    } else {
        while (div <= val / 2) {
            if (val % div == 0) {
                flag = 1;
                break;
            }
            div++;
        }
    }
    
    if (flag == 0)
        cout << "It is a Prime Number." << endl;
    else
        cout << "It is NOT a Prime Number." << endl;
        
    return 0;
}
