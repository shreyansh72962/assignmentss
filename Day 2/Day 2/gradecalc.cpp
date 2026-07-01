#include <iostream>
using namespace std;

int main() {
    double totalMarks;
    cout << "Enter marks obtained: ";
    cin >> totalMarks;
    
    if (totalMarks < 0 || totalMarks > 100) {
        cout << "Invalid marks entered!" << endl;
    } else if (totalMarks >= 85) {
        cout << "Final Grade = A" << endl;
    } else if (totalMarks >= 70) {
        cout << "Final Grade = B" << endl;
    } else if (totalMarks >= 55) {
        cout << "Final Grade = C" << endl;
    } else if (totalMarks >= 40) {
        cout << "Final Grade = D" << endl;
    } else {
        cout << "Final Grade = Fail" << endl;
    }
    
    return 0;
}
