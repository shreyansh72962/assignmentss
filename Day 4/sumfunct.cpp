#include <iostream>
using namespace std;

int calculateSum(int n1, int n2) {
    int result = n1 + n2;
    return result;
}

int main() {
    int first, second, ans;
    cout << "Provide two integers separated by space: ";
    cin >> first >> second;
    
    ans = calculateSum(first, second);
    cout << "Result = " << ans << endl;
    
    return 0;
}
