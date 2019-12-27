#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int sum, c, n, risp = 0, cifre = 4, zeri = 1000;
    for (int x = 0; x < 3; x++) {
        for (int i = zeri; i < (zeri * 10); i++) {
            sum = 0;
            c = zeri;
            for (int z = 0; z < cifre; z++) {
                n = i / c % 10;
                c = c / 10;
                sum += pow(n, 5);
            }
            if (sum == i) 
				risp += sum;
        }
        cifre++;
        zeri *= 10;
    }
    cout << risp;
}
