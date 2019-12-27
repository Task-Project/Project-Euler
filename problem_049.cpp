#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <math.h>
using namespace std;

vector<int> p;
vector<int> perm;

void load()
{
    int j;
    for (int i = 1488; i < 10000; i++) {
        j = 2;
        while (j <= sqrt(i) && i % j != 0)
            j++;
        if (i % j != 0)
            p.push_back(i);
    }
}

bool is_a_permuation(int x)
{
    stringstream s, ss;
    string s1, s2;
    s << x;
    s1 = s.str();
    ss << perm[0];
    s2 = ss.str();
    return is_permutation(s1.begin(), s1.end(), s2.begin());
}

int main()
{
    load();
    for (int i = 0; perm.size() != 3; i++) {
        perm.clear();
        perm.push_back(p[i]);
        for (int j = 0; j < 2; j++)
            if (binary_search(p.begin(), p.end(), perm[j] + 3330) && is_a_permuation(perm[j] + 3330))
                perm.push_back(perm[j] + 3330);
    }
    cout << perm[0] << perm[1] << perm[2];
}
