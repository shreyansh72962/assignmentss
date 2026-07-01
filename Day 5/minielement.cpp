#include <iostream>
using namespace std;

int main() {
    int totalItems;
    cout << "Please enter number of items: ";
    cin >> totalItems;
    
    int elements[100];
    int minVal;
    
    cout << "Type the integers: ";
    for (int index = 0; index < totalItems; index++) {
        cin >> elements[index];
        if (index == 0) {
            minVal = elements[0];
        } else {
            if (elements[index] < minVal) {
                minVal = elements[index];
            }
        }
    }
    
    cout << "Min value is " << minVal << endl;
    return 0;
}
