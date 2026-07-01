#include <iostream>
using namespace std;

class Carton {
    int length;

public:
    void setLength(int length) {
        this->length = length;
    }

    void displayLength() {
        cout << "Length provided: " << length << endl;
    }
};

int main() {
    Carton boxObj;
    int lenInput;

    cout << "Provide length dimension: ";
    cin >> lenInput;

    boxObj.setLength(lenInput);
    boxObj.displayLength();

    return 0;
}
