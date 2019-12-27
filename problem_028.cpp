#include <iostream>
using namespace std;
int main()
{
    long long x = 1, inc = 2, sum = 1;
    for (int i = 0; i < 500; i++) {
        for (int j = 0; j < 4; j++) {
            x += inc;
            sum += x;
        }
        inc += 2;
    }
    cout << sum;
}
