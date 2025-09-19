#include <iostream>
using namespace std;

int formingMagicSquare(int s[3][3]) {
    int cost = abs(s[1][1] - 5), min = 2000, tmp;
    int a = s[0][0], b = s[0][1], c = s[0][2], d = s[1][0], e = s[1][2], f = s[2][0], g = s[2][1], h = s[2][2];

    tmp = abs(a - 8) + abs(b - 3) + abs(c - 4) + abs(d - 1) + abs(e - 9) + abs(f - 6) + abs(g - 7) + abs(h - 2);
    if (tmp < min) min = tmp;

    tmp = abs(a - 6) + abs(b - 7) + abs(c - 2) + abs(d - 1) + abs(e - 9) + abs(f - 8) + abs(g - 3) + abs(h - 4);
    if (tmp < min) min = tmp;

    tmp = abs(a - 4) + abs(b - 3) + abs(c - 8) + abs(d - 9) + abs(e - 1) + abs(f - 2) + abs(g - 7) + abs(h - 6);
    if (tmp < min) min = tmp;

    tmp = abs(a - 2) + abs(b - 7) + abs(c - 6) + abs(d - 9) + abs(e - 1) + abs(f - 4) + abs(g - 3) + abs(h - 8);
    if (tmp < min) min = tmp;

    tmp = abs(a - 4) + abs(b - 9) + abs(c - 2) + abs(d - 3) + abs(e - 7) + abs(f - 8) + abs(g - 1) + abs(h - 6);
    if (tmp < min) min = tmp;
    tmp = abs(a - 2) + abs(b - 9) + abs(c - 4) + abs(d - 7) + abs(e - 3) + abs(f - 6) + abs(g - 1) + abs(h - 8);
    if (tmp < min) min = tmp;

    tmp = abs(a - 8) + abs(b - 1) + abs(c - 6) + abs(d - 3) + abs(e - 7) + abs(f - 4) + abs(g - 9) + abs(h - 2);
    if (tmp < min) min = tmp;

    tmp = abs(a - 6) + abs(b - 1) + abs(c - 8) + abs(d - 7) + abs(e - 3) + abs(f - 2) + abs(g - 9) + abs(h - 4);
    if (tmp < min) min = tmp;

    return cost + min;
}

int main()
{
    int x[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> x[i][j];
    
    int result = formingMagicSquare(x);

    cout<<result<<"\n";

    return 0;
}
