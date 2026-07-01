#include <iostream>
#include <set>
using namespace std;

int main() {
    int limit;
    cout << "How many numbers? ";
    cin >> limit;
    
    set<int> uniqueSet;
    cout << "Provide numbers: ";
    for (int x = 0; x < limit; x++) {
        int data;
        cin >> data;
        uniqueSet.insert(data);
    }
    
    cout << "Number of unique items: " << uniqueSet.size() << endl;
    return 0;
}
