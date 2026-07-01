#include <iostream>
#include <string>
using namespace std;

class Worker {
    string fullName;
    int workerNum;

public:
    Worker(string str, int num) {
        fullName = str;
        workerNum = num;
    }

    void display() {
        cout << "Worker Info -> Num: " << workerNum << ", Name: " << fullName << endl;
    }
};

int main() {
    string text;
    int val;

    cout << "Type Name: ";
    cin >> text;
    cout << "Type ID: ";
    cin >> val;

    Worker w(text, val);
    w.display();

    return 0;
}
