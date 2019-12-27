#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prod;
    int base = 2, power = 1000;
    int  length, remainder, sum = 0;
    prod.push_back(base);
    for (int i = 1; i < power; i++) {
        length = prod.size();
        remainder = 0;
        for (int j = 0; j < length; j++) {
            prod[j] = (prod[j] * base) + remainder;
            if (prod[j] > 9) {
                if (j == prod.size() - 1) {
                    prod.push_back(prod[j] / 10);
                    prod[j] %= 10;
                }
                else {
                    remainder = prod[j] / 10;
                    prod[j] = prod[j] % 10;
                }
            }
            else remainder = 0;
        }
    }
    for (int i = 0; i < prod.size(); i++) sum += prod[i];
    cout << sum;
}
