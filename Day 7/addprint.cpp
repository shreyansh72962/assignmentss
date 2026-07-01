#include <iostream>
using namespace std;

int main() {
    int val = 100;
    int* valPtr = &val;
    
    cout << "Target value = " << *valPtr << endl;
    cout << "Target address = " << valPtr << endl;
    
    return 0;
}
