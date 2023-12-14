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
#define lng(n) static_cast<ll>(n)

int main()
{
    int t; cin >> t; while(t--) {
        string s; cin >> s;
        stack<char> st;
        for(char c: s) {
            if(c=='B' && st.size()) {
                st.pop();
            } else st.push(c);
        }
        cout << st.size() << endl;
    }
    return 0;
}