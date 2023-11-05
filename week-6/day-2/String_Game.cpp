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
#define yesNo(c) if(c) cout<<"YES"<<endl; else cout<<"NO"<<endl

int main()
{
    int t; cin >> t; while(t--) {
        int n; string s;
        cin >> n >> s;
        int ones = 0, zeroes = 0;
        for(char c: s) {
            if(c=='1') ones++;
            else zeroes++;
        }
        int mn = min(ones, zeroes);
        if(mn%2) cout << "Zlatan";
        else cout << "Ramos";
        cout << endl;
    }
    return 0;
}