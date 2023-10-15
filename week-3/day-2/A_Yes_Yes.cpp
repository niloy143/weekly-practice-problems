// Problem Link: https://codeforces.com/problemset/problem/1759/A

#include <bits/stdc++.h>
using namespace std;

string yes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

int main()
{
    int t; cin >> t; while(t--) {
        string s; cin >> s;
        size_t sz = yes.find(s);
        if(sz != string::npos) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
    return 0;
}