#include <iostream>
#include <vector>
using namespace std;

int main() {
    int limit, item, highest;
    cout << "Enter total count: ";
    cin >> limit;
    
    vector<int> list;
    cout << "Enter values: ";
    
    for (int x = 0; x < limit; x++) {
        cin >> item;
        list.push_back(item);
        if (x == 0) {
            highest = item;
        } else if (item > highest) {
            highest = item;
        }
    }
    
    cout << "Largest element found = " << highest << endl;
    return 0;
}
