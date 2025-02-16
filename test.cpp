#include <iostream>
#include <fstream>
using namespace std;

const int n = 4, m = 4;

int main() {
    float b[n][m];
    int i = 0, j = 0;
    fstream file("input9.txt", ios::in);
    for (int k = 0; k < n; k++) {
        for (int l = 0; l < m; l++) {
            file >> b[k][l];
            cout << b[k][l] << " ";
        }
    }
    file.close();
    return 0;
}