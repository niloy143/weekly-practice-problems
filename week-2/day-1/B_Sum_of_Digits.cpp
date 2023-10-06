// Problem Link: https://codeforces.com/problemset/problem/102/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    int sum = 0; for(int x: s) sum += x - '0';
    int cnt = s.size() > 1;
    while(sum > 9) {
        string cstr = to_string(sum); int cs = 0;
        for(int x: cstr) cs += x - '0'; 
        sum = cs; cnt++;
    }
    cout << cnt;
    return 0;
}