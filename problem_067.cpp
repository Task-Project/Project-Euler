#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("triangle.txt");
    int mat[100][100] = { 0 };

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j <= i; j++) {
            in >> mat[i][j];
        }
    }

    for (int i = 98; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (mat[i + 1][j] > mat[i + 1][j + 1])
                mat[i][j] = mat[i][j] + mat[i + 1][j];
            else
                mat[i][j] = mat[i][j] + mat[i + 1][j + 1];
        }
    }
    cout << mat[0][0];
}
