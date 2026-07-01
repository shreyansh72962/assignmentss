#include <iostream>
using namespace std;

int findLargest(int val1, int val2) {
    int largest = val1;
    if (val2 > val1) {
        largest = val2;
    }
    return largest;
}

int main() {
    int a, b;
    cout << "Please type two integers: ";
    cin >> a >> b;
    
    int maxVal = findLargest(a, b);
    cout << "Max value = " << maxVal << endl;
    
    return 0;
}
