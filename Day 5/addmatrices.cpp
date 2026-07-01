#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    
    int matA[20][20], matB[20][20];
    
    cout << "Matrix 1 Input: ";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matA[i][j];
            
    cout << "Matrix 2 Input: ";
    for (int k = 0; k < m; ++k)
        for (int l = 0; l < n; ++l)
            cin >> matB[k][l];
            
    cout << "Addition Output:\n";
    for (int p = 0; p < m; ++p) {
        for (int q = 0; q < n; ++q) {
            cout << matA[p][q] + matB[p][q] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
