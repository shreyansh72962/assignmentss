#include <iostream>
#include <string>
using namespace std;

class Pupil {
public:
    string fullName;
    int roll;
    float grade;

    void printInfo() {
        cout << "Full Name = " << fullName << endl;
        cout << "Roll = " << roll << endl;
        cout << "Grade = " << grade << endl;
    }
};

int main() {
    Pupil p;
    cout << "Provide student name: ";
    cin >> p.fullName;
    cout << "Provide roll: ";
    cin >> p.roll;
    cout << "Provide grade: ";
    cin >> p.grade;

    cout << "\nOutput:\n";
    p.printInfo();

    return 0;
}
