// Problem Link: https://codeforces.com/problemset/problem/1692/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        char a[9][9];

        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++) cin >> a[i][j];

        int row, col;
        for(int i=2; i<8; i++) {
            for(int j=2; j<8; j++) {
                if(a[i][j] == '#') {
                    if(
                        a[i-1][j-1] == '#' &&
                        a[i+1][j-1] == '#' &&
                        a[i-1][j+1] == '#' &&
                        a[i+1][j+1] == '#'
                    ) {
                        row = i; col = j;
                    }
                }
            }
        }

        cout << row << " " << col << endl;
    }
    return 0;
}