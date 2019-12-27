#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
ifstream in("input.txt");

vector<string> name;

void load() {
    string s;
    char c;
    while (in >> c) {
        s = "";
        in >> c;
        while (c != 34) {
            s += c;
            in >> c;
        }
        name.push_back(s);
        in >> c;
    }
}

int main() {
    load();
    long long total = 0, score;
    sort(name.begin(), name.end());
    for (int i = 0; i < name.size(); i++) {
        score = 0;
        for (int j = 0; j < name[i].size(); j++) {
			score += name[i][j] - 64;
		}
        score *= i + 1;
        total += score;
    }
    cout << total;
}
