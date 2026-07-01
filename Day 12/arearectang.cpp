#include <iostream>
using namespace std;

class RectangleArea {
    int sideA;
    int sideB;

public:
    void setData(int first, int second) {
        sideA = first;
        sideB = second;
    }

    int area() {
        return sideA * sideB;
    }
};

int main() {
    RectangleArea shape;
    int s1, s2;

    cout << "Provide length: ";
    cin >> s1;
    cout << "Provide width: ";
    cin >> s2;

    shape.setData(s1, s2);
    cout << "Total Area is " << shape.area() << endl;

    return 0;
}
