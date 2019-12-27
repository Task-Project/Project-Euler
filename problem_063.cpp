#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> pt;
    int rem, c = 9, x;
    for (int a = 2; a <= 100; a++) {
        x = a;
        while (x > 9) {
            pt.push_back(x % 10);
            x /= 10;
        }
        pt.push_back(x);
        for (int b = 2; b <= 100; b++) {
            rem = 0;
            for (int i = 0; i < pt.size(); i++) {
                pt[i] = (pt[i] * a) + rem;
                if (pt[i] > 9) {
                    rem = pt[i] / 10;
                    pt[i] %= 10;
                }
                else
                    rem = 0;
            }
            if (rem > 9) {
                pt[pt.size() - 1] += rem % 10;
                rem /= 10;
                while (rem > 9) {
                    pt.push_back(rem % 10);
                    rem /= 10;
                }
                pt.push_back(rem);
            }
            else if (rem != 0)
                pt.push_back(rem);
            if (b == pt.size())
                c++;
        }
        pt.clear();
    }
    cout << c;
}
