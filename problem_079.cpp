#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
ifstream in("keylog.txt");

int main()
{
    string vet[50], passcode = "";
    for (int i = 0; i < 50; i++) {
        in >> vet[i];
    }
    int f, pos[3];
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 3; j++) {
            f = 0;
            for (int z = 0; z < passcode.length(); z++) {
                if (passcode[z] == vet[i][j])
                    f = 1;
            }
            if (f == 0)
                passcode += vet[i][j];
        }
    }
    sort(passcode.begin(), passcode.end());
    do {
        next_permutation(passcode.begin(), passcode.end());
        f = 0;
        for (int i = 0; i < 50; i++) {
            for (int j = 0; j < 3; j++) {
                for (int z = 0; z < passcode.length(); z++) {
                    if (vet[i][j] == passcode[z])
                        pos[j] = z;
                }
            }
            if (pos[0] < pos[1] && pos[1] < pos[2])
                f++;
        }
    } while (f != 50);
    cout << passcode;
}
