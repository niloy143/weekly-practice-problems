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

pii dif(pii x, pii y) {
    pii result = {y.first-x.first, y.second-x.second};

    if(result.second < 0) {
        result.first--;
        result.second += 60;
    }
    
    if(result.first < 0) result.first += 24;

    return result;
}

int main()
{
    int t; cin >> t; while(t--) {
        int n, h, m; cin >> n >> h >> m;
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        for(int i=0; i<n; i++) {
            int H,M; cin >> H >> M;
            pii v = dif({h,m}, {H,M});
            pq.push(v);
        }

        cout << pq.top().first << " " << pq.top().second << endl;
    }
    return 0;
}