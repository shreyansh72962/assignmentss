#include <iostream>
#include <vector>
using namespace std;

int main() {
    int limit, value;
    cout << "How many elements? ";
    cin >> limit;
    
    vector<int> arr;
    cout << "Enter them: ";
    for (int k = 0; k < limit; k++) {
        cin >> value;
        arr.push_back(value);
    }
    
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        for (auto runner = it + 1; runner != arr.end(); ) {
            if (*it == *runner) {
                runner = arr.erase(runner);
            } else {
                ++runner;
            }
        }
    }
    
    cout << "Unique output: ";
    for (int x = 0; x < arr.size(); x++) {
        cout << arr[x] << " ";
    }
    cout << endl;
    
    return 0;
}
