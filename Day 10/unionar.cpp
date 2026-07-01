#include <iostream>
#include <set>
using namespace std;

int main() {
    int len1, len2;
    set<int> finalSet;
    
    cout << "Length of array 1: ";
    cin >> len1;
    cout << "Values for array 1: ";
    for (int k = 0; k < len1; k++) {
        int item;
        cin >> item;
        finalSet.insert(item);
    }
    
    cout << "Length of array 2: ";
    cin >> len2;
    cout << "Values for array 2: ";
    for (int k = 0; k < len2; k++) {
        int item;
        cin >> item;
        finalSet.insert(item);
    }
    
    cout << "Union Output: ";
    for (int v : finalSet) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}
