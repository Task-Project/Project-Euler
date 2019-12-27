#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prod;
    int fact = 100;
    int length, remainder, sum = 0;
    prod.push_back(2);
    for (int i = 3; i <= fact; i++) {
        length = prod.size();
        remainder = 0;
        for (int j = 0; j < length; j++) {
            prod[j] = (prod[j] * i) + remainder;
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
        while (prod[prod.size() - 1] > 9) {
            prod.push_back(prod[prod.size() - 1] / 10);
            prod[prod.size() - 2] %= 10;
        }
    }
    for (int i = 0; i < prod.size(); i++) sum += prod[i];
    cout << sum;
}
