#include <iostream>
using namespace std;

class Figure {
public:
    virtual void display() {
        cout << "Output from Figure base class." << endl;
    }
};

class BoxShape : public Figure {
public:
    void display() override {
        cout << "Output from BoxShape derived class." << endl;
    }
};

int main() {
    BoxShape box;
    box.display();
    return 0;
}
