#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size, input;
    cout << "How many integers? ";
    cin >> size;
    
    vector<int> values;
    cout << "Type them: ";
    for (int k = 0; k < size; k++) {
        cin >> input;
        values.push_back(input);
    }
    
    int min_element = values.front();
    for (auto it = values.begin(); it != values.end(); ++it) {
        if (*it < min_element) {
            min_element = *it;
        }
    }
    
    cout << "Minimum is: " << min_element << endl;
    return 0;
}
