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
        vi fr(26, 0);
        for(int i=0; i<n; i++) {
            fr[s[i]-'a']++;
        }
        int odd = 0, evn=0;
        for(int x: fr) {
            odd += x%2;
            evn += (x%2==0&&x!=0);
        }
        if((odd+evn)==1) {
            if(n%2) cout << 2;
            else cout << 1;
        } else {
            if((n%2==0 && odd==0) || (n%2 && odd==1)) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}