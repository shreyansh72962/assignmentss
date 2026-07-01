#include <iostream>
#include <set>
using namespace std;

int main() {
    int len1, len2;
    set<int> firstList, commonList;
    
    cout << "First list size: ";
    cin >> len1;
    cout << "First list data: ";
    for (int k = 0; k < len1; k++) {
        int item;
        cin >> item;
        firstList.insert(item);
    }
    
    cout << "Second list size: ";
    cin >> len2;
    cout << "Second list data: ";
    for (int k = 0; k < len2; k++) {
        int item;
        cin >> item;
        if (firstList.count(item)) {
            commonList.insert(item);
        }
    }
    
    cout << "Intersection -> ";
    for (int v : commonList) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}
