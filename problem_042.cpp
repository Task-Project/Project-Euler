#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
using namespace std;
ifstream in("words.txt");

vector<string> word;

void load()
{
    string s;
    char c;
    while (in >> c) {
        s = "";
        in >> c;
        while (c != 34) {
            s += c;
            in >> c;
        }
        word.push_back(s);
        in >> c;
    }
}

int main()
{
    load();
    int score, c = 0;
    float x;
    for (int i = 0; i < word.size(); i++) {
        score = 0;
        for (int j = 0; j < word[i].size(); j++) {
            score += word[i][j] - 64;
        }
        score *= 2;
        x = (-1 + sqrt(1 + (score * 4))) / 2;
        if ((int)x == x)
            c++;
    }
    cout << c;
}
