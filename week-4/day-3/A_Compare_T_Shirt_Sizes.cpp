// Problem Link: https://codeforces.com/problemset/problem/1741/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())

int main()
{
    int t; cin >> t; while(t--) {
        string s1, s2; cin >> s1 >> s2; 
        int n1 = s1.size(), n2 = s2.size();
        int v1 = 0, v2 = 0;
        if(s1[n1-1] == 'S') v1 = -1;
        else if(s1[n1-1] == 'L') v1 = 1;

        if(s2[n2-1] == 'S') v2 = -1;
        else if(s2[n2-1] == 'L') v2 = 1;

        v1 *= n1;
        v2 *= n2;

        if(v1 == v2) cout << "=";
        else if(v1 > v2) cout << ">";
        else cout << "<";

        cout << endl;
    }
    return 0;
}