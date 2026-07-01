#include <iostream>
using namespace std;

void displayArray(int* p, int s) {
    for (int k = 0; k < s; k++) {
        cout << *(p + k) << " ";
    }
    cout << endl;
}

int main() {
    int limit;
    cout << "Provide element count: ";
    cin >> limit;
    
    int numbers[100];
    cout << "Provide items: ";
    for (int x = 0; x < limit; x++) {
        cin >> numbers[x];
    }
    
    cout << "Array contents: ";
    displayArray(numbers, limit);
    
    return 0;
}
