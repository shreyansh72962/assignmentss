#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "How many numbers? ";
    cin >> count;
    
    int seq[100];
    cout << "Type them: ";
    for (int x = 0; x < count; x++) cin >> seq[x];
    
    int* start = seq;
    int* end = seq + count;
    int maximum = *start;
    
    while (start < end) {
        if (*start > maximum) {
            maximum = *start;
        }
        start++;
    }
    
    cout << "Highest value = " << maximum << endl;
    return 0;
}
