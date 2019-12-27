#include <iostream>
#include <vector>
using namespace std;

vector<int> x, n, d;

void equal()
{
    //x=n+d
    if (n.size() > d.size()) {
        x.resize(n.size());
        for (int i = 0; i < x.size(); i++)
            x[i] = 0;
        for (int i = 0; i < n.size(); i++) {
            if (d.size() > i) {
                x[i] += n[i] + d[i];
                if (x[i] > 9) {
                    if (i == n.size() - 1) {
                        x.push_back(x[i] / 10);
                        x[i] %= 10;
                    }
                    else {
                        x[i + 1] += x[i] / 10;
                        x[i] %= 10;
                    }
                }
            }
            else
                x[i] += n[i];
        }
    }
    else {
        x.resize(d.size());
        for (int i = 0; i < x.size(); i++)
            x[i] = 0;
        for (int i = 0; i < d.size(); i++) {
            if (n.size() > i) {
                x[i] += n[i] + d[i];
                if (x[i] > 9) {
                    if (i == d.size() - 1) {
                        x.push_back(x[i] / 10);
                        x[i] %= 10;
                    }
                    else {
                        x[i + 1] += x[i] / 10;
                        x[i] %= 10;
                    }
                }
            }
            else
                x[i] += d[i];
        }
    }
}

void mcm()
{
    //d=d*2
    vector<int> dd;
    dd.resize(d.size());
    int l = d.size(), r = 0;
    for (int i = 0; i < l; i++) {
        dd[i] = d[i] * 2 + r;
        if (dd[i] > 9) {
            if (i == dd.size() - 1) {
                dd.push_back(dd[i] / 10);
                dd[i] %= 10;
            }
            else {
                r = dd[i] / 10;
                dd[i] %= 10;
            }
        }
        else
            r = 0;
    }
    //n=n+d
    if (n.size() > dd.size()) {
        l = n.size();
        for (int i = 0; i < l; i++) {
            if (dd.size() > i) {
                n[i] += dd[i];
                if (n[i] > 9) {
                    if (i == n.size() - 1) {
                        n.push_back(n[i] / 10);
                        n[i] %= 10;
                    }
                    else {
                        n[i + 1] += n[i] / 10;
                        n[i] %= 10;
                    }
                }
            }
        }
    }
    else {
        l = dd.size();
        for (int i = 0; i < l; i++) {
            if (n.size() > i) {
                n[i] += dd[i];
                if (n[i] > 9) {
                    if (i == n.size() - 1) {
                        n.push_back(n[i] / 10);
                        n[i] %= 10;
                    }
                    else {
                        n[i + 1] += n[i] / 10;
                        n[i] %= 10;
                    }
                }
            }
            else
                n.push_back(dd[i]);
        }
    }
}

int main()
{
    int c = 0;
    n.push_back(1);
    d.push_back(2);
    for (int i = 0; i < 1000; i++) {
        equal();
        if (x.size() > d.size())
            c++;
        mcm();
        swap(n, d);
    }
    cout << c;
}
