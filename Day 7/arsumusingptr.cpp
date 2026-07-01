#include <iostream>
using namespace std;

int getSum(int* ptr, int len) {
    int ans = 0;
    for (int i = 0; i < len; i++) {
        ans = ans + *(ptr + i);
    }
    return ans;
}

int main() {
    int limit;
    cout << "Number of elements: ";
    cin >> limit;
    
    int nums[100];
    cout << "Provide numbers: ";
    for (int x = 0; x < limit; x++) {
        cin >> nums[x];
    }
    
    cout << "Calculated Sum: " << getSum(nums, limit) << endl;
    return 0;
}
