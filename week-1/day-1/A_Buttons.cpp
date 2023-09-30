// Problem Link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int result = 0;
    int i = 0;
    while ((a > 0 || b > 0) && i < 2)
    {
        if (a > b)
        {
            result += a;
            a--;
        }
        else
        {
            result += b;
            b--;
        }

        i++;
    }
    cout << result;
    return 0;
}