#include <iostream>
using namespace std;

class Compute {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }

    float add(float num1, float num2) {
        return num1 + num2;
    }
};

int main() {
    Compute obj;
    cout << "Result (Int) = " << obj.add(8, 2) << endl;
    cout << "Result (Float) = " << obj.add(3.1f, 7.4f) << endl;
    return 0;
}
