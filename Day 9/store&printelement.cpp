#include <iostream>
#include <vector>
using namespace std;

int main() {
    int limit, input;
    cout << "How many items? ";
    cin >> limit;
    
    vector<int> myVector;
    cout << "Type the items: ";
    for (int x = 0; x < limit; x++) {
        cin >> input;
        myVector.push_back(input);
    }
    
    cout << "Output: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
