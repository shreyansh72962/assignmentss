#include <iostream>
#include <set>
using namespace std;

int main() {
    int count;
    cout << "Total items: ";
    cin >> count;
    
    set<int> dataSet;
    
    cout << "Type values: ";
    for (int k = 0; k < count; k++) {
        int item;
        cin >> item;
        dataSet.insert(item);
    }
    
    cout << "Filtered list: ";
    for (int v : dataSet) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}
