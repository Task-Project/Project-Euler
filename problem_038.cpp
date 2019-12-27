#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

string s;

int intostring(int x)
{
    stringstream ss;
    ss << x;
    s += ss.str();
}

int main()
{
    int molt, prod;
    string smax = "123456789", temp, conf = "123456789";
    for (long long i = 1; i < 10000; i++) {
        s = "";
        molt = 1;
        do {
            prod = i * molt;
            molt++;
            intostring(prod);
        } while (s.length() < 9);

        if (s.length() == 9) {
            temp = s;
            sort(temp.begin(), temp.end());
            if (temp == conf && s > smax)
                smax = s;
        }
    }
    cout << smax;
}
