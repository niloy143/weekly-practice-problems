// Problem Link: https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    int mx = INT_MIN;
    for(int i=0; i<n; i++) {
        cin >> a[i]; mx = max(a[i], mx);
    }
    vector<int> cnt(mx+1, 0);
    for(int i=0; i<n; i++) {
        for(int j=2; j<=a[i]; j++) {
            if(a[i]%j == 0) cnt[j]++;
        }
    }
    pair<int, int> result = {2, cnt[2]};
    for(int i=2; i<=mx; i++) {
        if(cnt[i] > result.second) result = {i, cnt[i]};
    }
    cout << result.first;
    return 0;
}