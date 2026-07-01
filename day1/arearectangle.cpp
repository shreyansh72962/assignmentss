#include <iostream>
using namespace std;

int main() {
    float sideA, sideB, rectArea;
    cout << "Input length: ";
    cin >> sideA;
    cout << "Input width: ";
    cin >> sideB;
    rectArea = sideA * sideB;
    cout << "Total Area = " << rectArea << endl;
    return 0;
}
