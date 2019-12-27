#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vet[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, f;
    int x, y, primi[] = { 2, 3, 5, 7, 11, 13, 17 }, rit, j;
    int pr;
    long long cc, somma = 0, som, i;
    
    for (i = 1; i < 3628800; i++) {
    	
        x = 1; y = 4; pr = 0; f = 0;

        do {
            rit = 0; cc = 100;
            
            for (j = x; j < y; j++) {
                rit = rit + (vet[j] * cc);
                cc = cc / 10;
            }
            if (rit % primi[pr] != 0)
                f = 1;
            pr++; y++; x++;
        } while (x <= 7 && f == 0);

        if (f == 0) {
            cc = 1000000000;
            som = 0;
            for (int z = 0; z < 10; z++) {
                som = som + (vet[z] * cc);
                cc = cc / 10;
            }
            somma = somma + som;
        }
        next_permutation(vet, vet + 10);
    }
    cout << somma;
}
