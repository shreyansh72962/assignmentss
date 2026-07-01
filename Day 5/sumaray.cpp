#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "How many values? ";
    cin >> limit;
    
    int dataSet[100];
    int ans = 0;
    
    cout << "Enter them now: ";
    for (int x = 0; x < limit; x++) {
        cin >> dataSet[x];
    }
    
    int y = 0;
    while (y < limit) {
        ans += dataSet[y];
        y++;
    }
    
    cout << "Sum = " << ans << endl;
    return 0;
}
