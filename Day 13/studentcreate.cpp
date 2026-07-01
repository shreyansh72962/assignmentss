#include <iostream>
#include <string>
using namespace std;

class Pupil {
private:
    string fullName;

public:
    void setName(string text) {
        fullName = text;
    }

    string getName() {
        return fullName;
    }
};

int main() {
    Pupil p1;
    p1.setName("Charlie");
    cout << "Data: " << p1.getName() << endl;
    return 0;
}
