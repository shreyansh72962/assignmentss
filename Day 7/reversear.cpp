#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "Total elements: ";
    cin >> count;
    
    int data[100];
    cout << "Enter sequence: ";
    for (int x = 0; x < count; x++) {
        cin >> data[x];
    }
    
    for (int left = 0, right = count - 1; left < right; left++, right--) {
        int copy = *(data + left);
        *(data + left) = *(data + right);
        *(data + right) = copy;
    }
    
    cout << "Output in reverse: ";
    for (int y = 0; y < count; y++) {
        cout << *(data + y) << " ";
    }
    cout << endl;
    
    return 0;
}
