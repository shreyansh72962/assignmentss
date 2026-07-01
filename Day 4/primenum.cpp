#include <iostream>
using namespace std;

void verifyPrime(int number) {
    int flag = 0;
    if (number <= 1) {
        flag = 1;
    } else {
        for (int j = 2; j < number; j++) {
            if (number % j == 0) {
                flag = 1;
                break;
            }
        }
    }
    
    if (flag == 0)
        cout << "It is Prime." << endl;
    else
        cout << "It is not Prime." << endl;
}

int main() {
    int n;
    cout << "Provide an integer: ";
    cin >> n;
    
    verifyPrime(n);
    return 0;
}
