#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count, shiftAmount;
    
    cout << "Number of elements: ";
    cin >> count;
    
    vector<int> dataArr;
    
    cout << "Type the elements: ";
    for (int x = 0; x < count; x++) {
        int item;
        cin >> item;
        dataArr.push_back(item);
    }
    
    cout << "Shift by: ";
    cin >> shiftAmount;
    shiftAmount = shiftAmount % count;
    
    cout << "Final output: ";
    for (int x = count - shiftAmount; x < count; x++) {
        cout << dataArr[x] << " ";
    }
    for (int x = 0; x < count - shiftAmount; x++) {
        cout << dataArr[x] << " ";
    }
    cout << endl;
    
    return 0;
}
