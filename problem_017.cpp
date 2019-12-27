#include <iostream>
#include <fstream>
using namespace std;
ifstream in("input.txt");

int main() {
    int c = 11;
    string unit[11], dozens[11], sap[11], s;
    for (int i = 1; i < 1000; i++) {
        if (i <= 10) {
            in >> unit[i];
            c += unit[i].length();
        }
        else if (i <= 19) {
            in >> s;
            sap[i % 10] = s;
            c += s.length();
        }
        else if (i == 20) {
            for (int j = 1; j < 10; j++) in >> dozens[j];
            c += dozens[2].length();
        }
        else if (i <= 99) {
            if (i % 10 == 0)
                c += dozens[i / 10].length();
            else
                c += dozens[i / 10].length() + unit[i % 10].length();
        }
        else {
            if (i % 100 == 0)
        		c += unit[i / 100].length() + 7;
            else if (i % 10 == 0)
                c += unit[i / 100].length() + 10 + dozens[(i / 10) % 10].length();
            else if ((i / 10) % 10 == 1)
                c += unit[i / 100].length() + 10 + sap[i % 10].length();
            else
                c += unit[i / 100].length() + 10 + dozens[(i / 10) % 10].length() + unit[i % 10].length();
        }
    }
    cout << c;
}
