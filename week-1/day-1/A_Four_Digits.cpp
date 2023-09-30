#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int n = x.size();

    for (int i = 0; i < 4 - n; i++)
        cout << "0";
    cout << x;

    return 0;
}