#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int n, j, i, c=0;
    for (i = 5; c != 4; i++) {
        s.clear();
	    n = i;
        j = 2;
        while (n != 1) {
            if (n % j == 0) {
                n /= j;
                s.insert(j);
            }
            else
                j++;
        }
        if(s.size()==4) c++;
        else c=0;
    }
    cout << i - 4;
}
