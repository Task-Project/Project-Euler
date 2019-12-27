#include <iostream>
#include <math.h>
#include <set>
using namespace std;

int main(){
    set<double> stp;
    for (int a = 2; a <= 100; a++) {
        for (int b = 2; b <= 100; b++) {
            stp.insert(log(pow(a, b)));
        }
    }
    cout << stp.size();
}
