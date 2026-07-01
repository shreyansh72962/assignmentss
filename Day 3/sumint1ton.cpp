#include <iostream>
using namespace std;

int main() {
    int limit, ans = 0;
    cout << "Enter upper limit: ";
    cin >> limit;
    
    for (int k = 1; k <= limit; ++k) {
        ans = ans + k;
    }
    
    cout << "The sum of all integers is " << ans << endl;
    return 0;
}
