// Problem Link: https://atcoder.jp/contests/abc162/tasks/abc162_c?lang=en

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> drr(201);

int gcd(int x, int y, int z) {
    int mn = x; mn = min(mn, y); mn = min(mn, z);

    for(int n: drr[mn]) {
        if(x%n == 0 && y%n == 0 && z%n == 0) return n;
    }

    return 1;
}

int main()
{
    int n; cin >> n; int gs = 0;

    for(int i=1; i<201; i++) {
        for(int j=1; j<=i; j++) {
            if(i%j == 0) drr[i].push_back(j);
        }
    }

    for(int i=1; i<201; i++) {
        auto dr = drr[i];
        reverse(dr.begin(), dr.end());
        drr[i] = dr;
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            for(int k=1; k<=n; k++) {
                gs += gcd(i, j, k);
            }
        }
    }

    cout << gs;
    return 0;
}