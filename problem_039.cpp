#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int solutions, max = 0, p_memo, x;
    float i;
    for (int p = 10; p <= 1000; p += 2) {
        solutions = 0;
        for (int c1 = 1; c1 < (p / 2) - 1; c1++) {
            for (int c2 = c1 + 1; c2 < p / 2; c2++) {
                i = sqrt((c1 * c1) + (c2 * c2));
                x = p - (c1 + c2);
                if (x == i)
                    solutions++;
            }
        }
        if (solutions > max) {
            max = solutions;
            p_memo = p;
        }
    }
    cout << p_memo;
}
