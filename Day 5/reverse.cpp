#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "Size of array: ";
    cin >> count;
    
    int items[100];
    cout << "Provide items: ";
    for (int j = 0; j < count; j++) {
        cin >> items[j];
    }
    
    cout << "Reverse: ";
    int k = count - 1;
    while (k >= 0) {
        cout << items[k] << " ";
        k--;
    }
    cout << endl;
    
    return 0;
}
