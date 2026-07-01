#include <iostream>
using namespace std;

int main() {
    int count, val;
    cout << "Enter total count: ";
    cin >> count;
    
    int data[100];
    int maxVal;
    
    cout << "Enter values: \n";
    for (int x = 0; x < count; x++) {
        cin >> data[x];
        if (x == 0) {
            maxVal = data[0];
        } else if (data[x] > maxVal) {
            maxVal = data[x];
        }
    }
    
    cout << "Max = " << maxVal << endl;
    return 0;
}
