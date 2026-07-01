#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int limit, data;
    cout << "Provide element count: ";
    cin >> limit;
    
    vector<int> list;
    cout << "Provide elements: ";
    for (int x = 0; x < limit; x++) {
        cin >> data;
        list.push_back(data);
    }
    
    reverse(list.begin(), list.end());
    
    cout << "Reversed result: ";
    for (int y = 0; y < list.size(); y++) {
        cout << list[y] << " ";
    }
    cout << endl;
    
    return 0;
}
