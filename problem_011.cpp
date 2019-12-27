#include <iostream>
#include <fstream>
#define n 20
using namespace std;
ifstream in("input.txt");

int main() {
    int mat[n][n], max = 0, prod;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> mat[i][j];
        }
    }
    for (int i = 0; i < n - 3; i++) {
        for (int j = 0; j < n - 3; j++) {
            prod = mat[i][j] * mat[i][j + 1] * mat[i][j + 2] * mat[i][j + 3];
            if (prod > max) max = prod;
            prod = mat[i][j] * mat[i + 1][j] * mat[i + 2][j] * mat[i + 3][j];
            if (prod > max) max = prod;
            prod = mat[i][j] * mat[i + 1][j + 1] * mat[i + 2][j + 2] * mat[i + 3][j + 3];
            if (prod > max) max = prod;
            prod = mat[i][j + 3] * mat[i + 1][j + 2] * mat[i + 2][j + 1] * mat[i + 3][j];
            if (prod > max) max = prod;
        }
    }
    cout << max;
}
