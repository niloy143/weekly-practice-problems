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
        string s; cin >> s;
        int n = s.size();
        deque<pii> a;
        int x = (s[0]-'a')+1;
        int y = (s[n-1]-'a')+1;


        for(int i=1; i<n-1; i++) {
            int v = (s[i]-'a')+1;

            if(
                (x <= v && v <= y) ||
                (x >= v && v >= y)
            ) {
                a.push_back({v,i+1});
            }
        }

        srt(a);

        if(x > y) rvs(a);

        a.push_front({x, 1});
        a.push_back({y, n});
        
        int cost = 0;
        for(int i=0; i<a.size()-1; i++) {
            cost += abs(a[i].first-a[i+1].first);
        }

        cout << cost << " " << a.size() << endl;
        for(auto v: a) cout << v.second << " ";
        cout << endl;
    }
    return 0;
}