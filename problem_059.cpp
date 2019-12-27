#include <iostream>
#include <fstream>
using namespace std;
ifstream in("cipher.txt");

string cipher, plaintext, hack;

void load()
{
    char c;
    int x;
    while (in >> x) {
        cipher += x;
        in >> c;
    }
}

int main()
{
    load();
    int count, max = 0, sum, smax = 0, x, y, z;
    
    for (int a = 97; a <= 122; a++) {
        for (int b = 97; b <= 122; b++) {
            for (int c = 97; c <= 122; c++) {
                count = 0;
                sum = 0;
                hack = "";
                for (int i = 0; i < cipher.length(); i += 3) {
                    x = cipher[i] ^ a;
                    y = cipher[i + 1] ^ b;
                    z = cipher[i + 2] ^ c;
                    hack += x;
                    hack += y;
                    hack += z;
                    sum += x + y + z;
                    if (x >= 96 && x <= 122 || x >= 65 && x <= 90 || x == 32)
                        count++;
                    if (y >= 96 && y <= 122 || y >= 65 && y <= 90 || x == 32)
                        count++;
                    if (z >= 96 && z <= 122 || z >= 65 && z <= 90 || x == 32)
                        count++;
                }
                if (count > max) {
                    smax = sum;
                    max = count;
                    plaintext = hack;
                }
            }
        }
    }
    cout << plaintext << endl << smax;
}
