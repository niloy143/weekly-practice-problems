#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin >> x;

    int xint = x;

    if (x - xint < 0.5)
        cout << xint;
    else
        cout << ++xint;

    return 0;
}