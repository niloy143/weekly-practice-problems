// Problem Link: https://codeforces.com/problemset/status?my=on

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>a;
    for(int i=2; i<=n; i++) {
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++) {
            if(i%j == 0) {
                isPrime = false; break;
            }
        }
        if(isPrime) a.push_back(i);
    }
    int cnt = 0;
    for(int i=2; i<=n; i++) {
        int di = 0;
        for(int x: a) {
            if(i%x == 0) di++;
        }
        if(di == 2) cnt++;
    }
    cout << cnt;

    return 0;
}