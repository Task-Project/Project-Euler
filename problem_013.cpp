#include <iostream>
#include <fstream>
using namespace std;
ifstream in("input.txt");

int main() {
    int vet[50] = { 0 };
    string s;
    in >> s;
    for (int i = 0; i < 50; i++) vet[i] = s[i] - 48;
    
    while (in >> s) {
        for (int i = 49; i >= 0; i--) {
            vet[i] += s[i] - 48;
            if (vet[i] > 9 && i > 0) {
                vet[i - 1] += vet[i] / 10;
                vet[i] %= 10;
            }
        }
    }
    for (int i = 0; i < 8; i++) cout << vet[i];
}
