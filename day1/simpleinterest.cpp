#include <iostream>
using namespace std;

int main() {
    float amount;
    float rate;
    float years;
    
    cout << "Principal amount? ";
    cin >> amount;
    cout << "Interest rate %? ";
    cin >> rate;
    cout << "Duration in years? ";
    cin >> years;
    
    float finalInterest = (amount * rate * years) / 100;
    cout << "The Simple Interest is " << finalInterest << endl;
    
    return 0;
}
