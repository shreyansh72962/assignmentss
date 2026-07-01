#include <iostream>
using namespace std;

class Transport {
public:
    virtual void start() = 0;
};

class SportsCar : public Transport {
public:
    void start() override {
        cout << "Sports car engine revs up!" << endl;
    }
};

int main() {
    SportsCar v;
    v.start();
    return 0;
}
