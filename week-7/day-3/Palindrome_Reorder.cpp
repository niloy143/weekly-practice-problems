// Problem Link: https://cses.fi/problemset/task/1755/

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
    string s; cin >> s; int n = s.size();
    deque<int> a;

    vi fr(26,0);
    for(char c: s) fr[c-'A']++;

    int odd = 0, evn = 0;
    for(int x: fr) {
        odd += (x%2);
        evn += (x%2==0&&x!=0);
    }

    if((n%2==0 && odd!=0) || (n%2 && odd!=1)) cout << "NO SOLUTION";
    else {
        for(int i=0; i<26; i++) {
            if(fr[i]%2) {
                char c = i+'A';
                while(fr[i]--) a.push_back(c);
                break;
            }
        }
        for(int i=0; i<26; i++) {
            char c = i+'A';
            while(fr[i]>=2) {
                a.push_back(c);
                a.push_front(c);
                fr[i]-=2;
            }
        }
    }

    for(char c: a) cout << c;
    
    return 0;
}