#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
using namespace std;
ifstream in("poker.txt");
char cer[5];

int High_Cardcomplex(int vet1[], int vet2[])
{
    sort(vet1, vet1 + 5);
    sort(vet2, vet2 + 5);
    for (int i = 4; i >= 0; i--) {
        if (vet1[i] > vet2[i]) {
            return 1;
        }
        else if (vet1[i] < vet2[i]) {
            return 0;
        }
    }
    return 0;
}

int High_Card(int vet1[], int vet2[])
{
    sort(vet1, vet1 + 5);
    sort(vet2, vet2 + 5);
    if (vet1[4] > vet2[4]) {
        return 1;
    }
    return 0;
}

int two(int vet1[], int vet2[])
{
    int max1, max2, v1[3], v2[3], c1, c2;
    sort(vet1, vet1 + 5);
    sort(vet2, vet2 + 5);
    if (vet1[0] == vet1[1])
        max1 = vet1[0];
    if (vet1[1] == vet1[2])
        max1 = vet1[1];
    if (vet1[2] == vet1[3])
        max1 = vet1[2];
    if (vet1[3] == vet1[4])
        max1 = vet1[3];

    if (vet2[0] == vet2[1])
        max2 = vet2[0];
    if (vet2[1] == vet2[2])
        max2 = vet2[1];
    if (vet2[2] == vet2[3])
        max2 = vet2[2];
    if (vet2[3] == vet2[4])
        max2 = vet2[3];

    if (max1 > max2) {
        return 1;
    }
    else if (max1 == max2) {
        c1 = 0;
        c2 = 0;
        for (int i = 0; i < 5; i++) {
            if (vet1[i] != max1) {
                v1[c1] = vet1[i];
                c1++;
            }
            if (vet2[i] != max2) {
                v2[c2] = vet2[i];
                c2++;
            }
        }
        sort(v1, v1 + 3);
        sort(v2, v2 + 3);
        for (int i = 2; i >= 0; i--) {
            if (v1[i] > v2[i]) {
                return 1;
            }
            else if (v1[i] < v2[i]) {
                return 0;
            }
        }
    }
    return 0;
}

int twotwo(int vet1[], int vet2[])
{
    int max1 = 0, max2 = 0, m1, m2, x1, x2;
    sort(vet1, vet1 + 5);
    sort(vet2, vet2 + 5);
    if (vet1[0] == vet1[1] && vet1[0] > max1)
        max1 = vet1[0];
    if (vet1[1] == vet1[2] && vet1[1] > max1)
        max1 = vet1[1];
    if (vet1[2] == vet1[3] && vet1[2] > max1)
        max1 = vet1[2];
    if (vet1[3] == vet1[4] && vet1[3] > max1)
        max1 = vet1[3];

    if (vet2[0] == vet2[1] && vet2[0] > max2)
        max2 = vet2[0];
    if (vet2[1] == vet2[2] && vet2[1] > max2)
        max2 = vet2[1];
    if (vet2[2] == vet2[3] && vet2[2] > max2)
        max2 = vet2[2];
    if (vet2[3] == vet2[4] && vet2[3] > max2)
        max2 = vet2[3];

    if (max1 > max2) {
        return 1;
    }
    else if (max1 == max2) {
        if (vet1[0] == vet1[1] && vet1[0] != max1)
            m1 = vet1[0];
        if (vet1[1] == vet1[2] && vet1[1] != max1)
            m1 = vet1[1];
        if (vet1[2] == vet1[3] && vet1[2] != max1)
            m1 = vet1[2];
        if (vet1[3] == vet1[4] && vet1[3] != max1)
            m1 = vet1[3];

        if (vet2[0] == vet2[1] && vet2[0] != max2)
            m2 = vet2[0];
        if (vet2[1] == vet2[2] && vet2[1] != max2)
            m2 = vet2[1];
        if (vet2[2] == vet2[3] && vet2[2] != max2)
            m2 = vet2[2];
        if (vet2[3] == vet2[4] && vet2[3] != max2)
            m2 = vet2[3];

        if (m1 > m2) {
            return 1;
        }
        else if (m1 == m2) {
            for (int i = 0; i < 5; i++) {
                if (vet1[i] != max1 && vet1[i] != m1) {
                    x1 = vet1[i];
                }
                if (vet2[i] != max2 && vet2[i] != m2) {
                    x2 = vet2[i];
                }
            }
            if (x1 > x2) {
                return 1;
            }
        }
    }
    return 0;
}

int tris(int vet1[], int vet2[])
{
    int max1, max2;
    sort(vet1, vet1 + 5);
    sort(vet2, vet2 + 5);
    if (vet1[0] == vet1[2]) {
        max1 = vet1[0];
    }
    else {
        max1 = vet1[4];
    }

    if (vet2[0] == vet2[2]) {
        max2 = vet2[0];
    }
    else {
        max2 = vet2[4];
    }

    if (max1 > max2) {
        return 1;
    }
    return 0;
}

int quattro(int vet1[], int vet2[])
{
    int max1, max2;
    sort(vet1, vet1 + 5);
    sort(vet2, vet2 + 5);
    if (vet1[0] == vet1[1]) {
        max1 = vet1[0];
    }
    else {
        max1 = vet1[4];
    }

    if (vet2[0] == vet2[1]) {
        max2 = vet2[0];
    }
    else {
        max2 = vet2[4];
    }

    if (max1 > max2) {
        return 1;
    }
    return 0;
}

int full(int vet1[], int vet2[])
{
    int max1, max2, c;
    c = 1;
    sort(vet1, vet1 + 5);
    sort(vet2, vet2 + 5);
    for (int i = 1; i < 5; i++) {
        if (vet1[0] == vet1[i]) {
            c++;
        }
    }
    if (c == 3) {
        max1 == vet1[0];
    }
    else {
        max1 == vet1[4];
    }
    c = 1;
    for (int i = 1; i < 5; i++) {
        if (vet2[0] == vet2[i]) {
            c++;
        }
    }
    if (c == 3) {
        max2 = vet2[0];
    }
    else {
        max2 = vet2[4];
    }

    if (max1 > max2) {
        return 1;
    }
    return 0;
}

int disequal(int num1[], int num2[], int pr)
{
    switch (pr) {
    case 1:
        if (High_Cardcomplex(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 2:
        if (two(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 3:
        if (twotwo(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 4:
        if (tris(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 5:
        if (High_Card(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 6:
        if (High_Cardcomplex(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 7:
        if (full(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 8:
        if (quattro(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    case 9:
        if (High_Card(num1, num2) == 1) {
            return 1;
        }
        else
            return 0;
        break;
    }
}

int One_Pair(int vet[])
{
    int c = 0;
    sort(vet, vet + 5);
    if (vet[0] == vet[1])
        c++;
    if (vet[1] == vet[2])
        c++;
    if (vet[2] == vet[3])
        c++;
    if (vet[3] == vet[4])
        c++;

    if (c == 1) {
        return 2;
    }
    else
        return 0;
}

int Two_Pairs(int vet[])
{
    int c = 0;
    sort(vet, vet + 5);
    if (vet[0] == vet[1])
        c++;
    if (vet[1] == vet[2])
        c++;
    if (vet[2] == vet[3])
        c++;
    if (vet[3] == vet[4])
        c++;

    if (c == 2) {
        return 3;
    }
    else
        return 0;
}

int Three_of_Kind(int vet[])
{
    int c1 = 1, c2 = 1;
    sort(vet, vet + 5);
    for (int i = 1; i < 4; i++) {
        if (vet[0] == vet[i]) {
            c1++;
        }
        if (vet[4] == vet[i]) {
            c2++;
        }
    }
    if (c1 == 3 || c2 == 3) {
        return 4;
    }
    else
        return 0;
}

int Straight(int vet[])
{
    int f = 0;
    sort(vet, vet + 5);
    for (int i = 1; i < 5; i++) {
        if ((vet[0] + i) != vet[i]) {
            f = 1;
        }
    }
    if (f == 0) {
        return 5;
    }
    else
        return 0;
}

int Flush(int vet[])
{
    int f = 0;
    for (int i = 1; i < 5; i++) {
        if (cer[0] != cer[i]) {
            f = 1;
        }
    }
    if (f == 0) {
        return 6;
    }
    else
        return 0;
}

int Full_House(int vet[])
{
    int c1 = 1, c2 = 1;
    sort(vet, vet + 5);
    for (int i = 1; i < 4; i++) {
        if (vet[0] == vet[i]) {
            c1++;
        }
        if (vet[4] == vet[i]) {
            c2++;
        }
    }
    if ((c1 == 2 && c2 == 3) || (c1 == 3 && c2 == 2)) {
        return 7;
    }
    else
        return 0;
}

int Four_of_Kind(int vet[])
{
    int c = 1;
    sort(vet, vet + 5);
    for (int i = 1; i < 5; i++) {
        if (vet[i] == vet[i - 1]) {
            c++;
        }
    }
    if (c == 4) {
        return 8;
    }
    else
        return 0;
}

int Straight_Flush(int vet[])
{
    int f = 0;
    for (int i = 1; i < 5; i++) {
        if (cer[0] != cer[i]) {
            f = 1;
        }
    }
    if (f == 0) {
        sort(vet, vet + 5);
        for (int i = 1; i < 5; i++) {
            if ((vet[0] + i) != vet[i]) {
                f = 1;
            }
        }
        if (f == 0) {
            return 9;
        }
    }
    return 0;
}

int Royal_Flush(int vet[])
{
    int f = 0;
    for (int i = 1; i < 5; i++) {
        if (cer[0] != cer[i]) {
            f = 1;
        }
    }
    if (f == 0) {
        sort(vet, vet + 5);
        for (int i = 10; i <= 14; i++) {
            if (vet[i - 10] != i) {
                f = 1;
            }
        }
        if (f == 0) {
            return 10;
        }
    }
    return 0;
}

int setpriority(int vet[])
{
    int prio;
    if (Royal_Flush(vet) == 10) {
        prio = 10;
    }
    else if (Straight_Flush(vet) == 9) {
        prio = 9;
    }
    else if (Four_of_Kind(vet) == 8) {
        prio = 8;
    }
    else if (Full_House(vet) == 7) {
        prio = 7;
    }
    else if (Flush(vet) == 6) {
        prio = 6;
    }
    else if (Straight(vet) == 5) {
        prio = 5;
    }
    else if (Three_of_Kind(vet) == 4) {
        prio = 4;
    }
    else if (Two_Pairs(vet) == 3) {
        prio = 3;
    }
    else if (One_Pair(vet) == 2) {
        prio = 2;
    }
    else {
        prio = 1;
    }
    return prio;
}

int assegna(char c)
{
    int x;
    if (c == 'T') {
        return 10;
    }
    else if (c == 'J') {
        return 11;
    }
    else if (c == 'Q') {
        return 12;
    }
    else if (c == 'K') {
        return 13;
    }
    else if (c == 'A') {
        return 14;
    }
    else {
        x = c - 48;
        return x;
    }
}

int main()
{
    char c;
    int num1[5], num2[5];
    int pr1 = 0, pr2 = 0;
    int player1 = 0, player2 = 0;
    for (int p = 0; p < 1000; p++) {
        for (int i = 0; i < 5; i++) {
            in >> c;
            num1[i] = assegna(c);
            in >> cer[i];
        }
        pr1 = setpriority(num1);
        for (int i = 0; i < 5; i++) {
            in >> c;
            num2[i] = assegna(c);
            in >> cer[i];
        }
        pr2 = setpriority(num2);
        if (pr1 > pr2) {
            player1++;
        }
        else if (pr1 == pr2) {
            if (disequal(num1, num2, pr1) == 1) {
                player1++;
            }
            else
                player2++;
        }

        else
            player2++;
    }
    cout << "player1 = " << player1 << endl;
    cout << "player2 = " << player2;
}
