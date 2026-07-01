#include <iostream>
#include <map>
using namespace std;

int main() {
    int limit;
    cout << "Total elements: ";
    cin >> limit;
    
    map<int, int> myMap;
    cout << "Type values: ";
    for (int k = 0; k < limit; k++) {
        int num;
        cin >> num;
        myMap[num]++;
    }
    
    cout << "Results:\n";
    for (auto data : myMap) {
        cout << "Element " << data.first << " : Count " << data.second << "\n";
    }
    
    return 0;
}
