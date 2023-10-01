// Problem Link: https://codeforces.com/problemset/problem/1722/C

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, vector<int>>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<string, pii> mp;

        vector<vector<string>> mtx(3, vector<string>(n));
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> mtx[i][j];

                mp[mtx[i][j]].first++;
                mp[mtx[i][j]].second.push_back(i);
            }

        vector<int> cnt(3, 0);

        for (auto x : mp)
        {
            if (x.second.first == 1)
                cnt[x.second.second[0]] += 3;
            else if (x.second.first == 2)
            {
                cnt[x.second.second[0]]++;
                cnt[x.second.second[1]]++;
            }
        }

        for (int i = 0; i < 3; i++)
            cout << cnt[i] << " ";
        cout << endl;
    }
    return 0;
}