#include <iostream>
using namespace std;

int main()
{
    int vet[] = { 3, 5, 7, 11, 13, 17, 19, 23 };
    int x = 2, i = 0;
    while (x * vet[i] < 1000000) {
        x = x * vet[i];
        i++;
    }
    cout << x;
}
