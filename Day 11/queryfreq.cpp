#include <iostream>
#include <map>
using namespace std;

int main() {
    int total;
    cout << "How many numbers? ";
    cin >> total;
    
    map<int, int> myMap;
    cout << "Type the sequence: ";
    for (int k = 0; k < total; k++) {
        int num;
        cin >> num;
        myMap[num]++;
    }
    
    int qCount;
    cout << "Number of searches: ";
    cin >> qCount;
    
    for (int k = 0; k < qCount; k++) {
        int searchVal;
        cout << "Search element: ";
        cin >> searchVal;
        cout << "Frequency -> " << myMap[searchVal] << endl;
    }
    
    return 0;
}
