#include <iostream>
using namespace std;

class PetAnimal {
public:
    void display() {
        cout << "Base class message printed!" << endl;
    }
};

class Puppy : public PetAnimal {
};

int main() {
    Puppy p1;
    p1.display();
    return 0;
}
