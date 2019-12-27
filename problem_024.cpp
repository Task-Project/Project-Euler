#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "0123456789";
    for (int i = 1; i < 1000000; i++) {
        next_permutation(s.begin(), s.end());
    }
    cout << s;
}
