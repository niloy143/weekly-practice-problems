// Problem Link: https://codeforces.com/problemset/problem/1772/B

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

bool isBeu(int tl, int tr, int bl, int br) {
    return tl < tr && tl < bl && bl < br && tr < br;
}

int main()
{
    int t; cin >> t; while(t--) {
        int tl, tr, bl, br; cin >> tl >> tr >> bl >> br;
        if (
            isBeu(tl,tr,bl,br) ||
            isBeu(bl,tl,br,tr) ||
            isBeu(br,bl,tr,tl) ||
            isBeu(tr,br,tl,bl)
        ) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}