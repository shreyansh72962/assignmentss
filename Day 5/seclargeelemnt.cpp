#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Total elements? ";
    cin >> limit;
    
    int list[100];
    cout << "Enter them: ";
    for (int x = 0; x < limit; x++) {
        cin >> list[x];
    }
    
    int firstMax = list[0], secondMax = list[0];
    for (int y = 0; y < limit; y++) {
        if (list[y] > firstMax) {
            firstMax = list[y];
        }
    }
    
    secondMax = -2147483648;
    for (int z = 0; z < limit; z++) {
        if (list[z] > secondMax && list[z] < firstMax) {
            secondMax = list[z];
        }
    }
    
    cout << "2nd Largest = " << secondMax << endl;
    return 0;
}
