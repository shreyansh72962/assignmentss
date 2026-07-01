#include <iostream>
using namespace std;

void doSwap(int* first, int* second) {
    int copy = *first;
    *first = *second;
    *second = copy;
}

int main() {
    int num1, num2;
    cout << "Provide two numbers: ";
    cin >> num1 >> num2;
    
    doSwap(&num1, &num2);
    
    cout << "Result -> First: " << num1 << " | Second: " << num2 << endl;
    return 0;
}
