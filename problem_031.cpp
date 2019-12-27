#include <iostream>
using namespace std;

int main(){
    int x = 0;
    for (int a = 200; a >= 0; a = a - 200)
        for (int b = a; b >= 0; b = b - 100)
            for (int c = b; c >= 0; c = c - 50)
                for (int d = c; d >= 0; d = d - 20)
                    for (int e = d; e >= 0; e = e - 10)
                        for (int f = e; f >= 0; f = f - 5)
                            for (int g = f; g >= 0; g = g - 2)
                                x++;
    cout << x;
}
