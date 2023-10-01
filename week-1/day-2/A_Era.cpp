// Problem Link: https://codeforces.com/problemset/problem/1604/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n++;
        int cnt = 0, x;

        for (int i = 1; i < n; i++)
        {
            cin >> x;
            if (x > i)
            {
                int op = x - i;
                i += op;
                n += op;
                cnt += op;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}