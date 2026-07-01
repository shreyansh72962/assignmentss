#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int count;
    cout << "Element count: ";
    cin >> count;
    
    set<int> tracker;
    vector<int> resultList;
    
    cout << "Enter sequence: ";
    for (int k = 0; k < count; k++) {
        int data;
        cin >> data;
        tracker.insert(data);
    }
    
    for (int v : tracker) {
        resultList.push_back(v);
    }
    
    cout << "Cleaned vector: ";
    for (int k = 0; k < resultList.size(); k++) {
        cout << resultList[k] << " ";
    }
    cout << endl;
    return 0;
}
