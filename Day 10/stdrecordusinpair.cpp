#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    pair<int, string> dataPair;
    
    cout << "Provide Roll No: ";
    cin >> dataPair.first;
    cout << "Provide Full Name: ";
    cin >> dataPair.second;
    
    cout << "Details saved. Roll=" << dataPair.first << " Name=" << dataPair.second << endl;
    return 0;
}
