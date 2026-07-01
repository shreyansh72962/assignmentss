#include <iostream>
using namespace std;

class Vehicle {
public:
    static int counter;

    Vehicle() {
        counter++;
    }
};

int Vehicle::counter = 0;

int main() {
    Vehicle v1;
    Vehicle v2;

    cout << "Count of Vehicle objects = " << Vehicle::counter << endl;

    return 0;
}
