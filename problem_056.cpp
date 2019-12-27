#include <iostream>
using namespace std;

int main()
{
    int rest, sum, max = 0;
    for (int a = 1; a < 100; a++) {
        for (int b = 1; b < 100; b++) {
            int num[200] = { 0 };
            if (a <= 9)
                num[0] = a;
            else {
                num[0] = a % 10;
                num[1] = a / 10;
            }
            for (int j = 2; j <= b; j++) {
                rest = 0;
                for (int i = 0; i < 200; i++) {
                    num[i] = num[i] * a + rest;
                    if (num[i] > 9) {
                        rest = num[i] / 10;
                        num[i] %= 10;
                    }
                    else
                        rest = 0;
                }
            }
            sum = 0;
            for (int i = 0; i < 200; i++)
                sum += num[i];
            if (sum > max)
                max = sum;
        }
    }
    cout << max;
}
