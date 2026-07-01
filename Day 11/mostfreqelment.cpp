#include <iostream>
#include <map>
using namespace std;

int main() {
    int count;
    cout << "Total elements? ";
    cin >> count;
    
    map<int, int> freqMap;
    cout << "Type the values: ";
    for (int k = 0; k < count; k++) {
        int num;
        cin >> num;
        freqMap[num]++;
    }
    
    int maxOccurrences = 0;
    int targetElement = -1;
    
    for (auto data : freqMap) {
        if (data.second > maxOccurrences) {
            maxOccurrences = data.second;
            targetElement = data.first;
        }
    }
    
    cout << "The most common element: " << targetElement << endl;
    return 0;
}
