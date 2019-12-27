#include <iostream>
using namespace std;

int main() {
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int k = 0, year = 1901, Sundays = 0;
    for (int i = 0; i < 12; i++)
        k += days[i];
    for (year = 1901; year < 2001; year++) {
        if (!(year % 4) || (!(year % 100) && !(year % 400)))
            days[1] = 29;
        else
            days[1] = 28;
        for (int i = 0; i < 12; i++) {
            if (!((k - 1) % 7))
                Sundays++;
            k += days[i];
        }
    }
    cout << Sundays;
}
