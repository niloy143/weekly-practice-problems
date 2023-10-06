// Problem Link: https://codeforces.com/problemset/problem/1692/D

#include <bits/stdc++.h>
using namespace std;

string tmStr (int hr, int mnt) {
    string hour = "", minute = "";
    hour += to_string(hr);
    minute += to_string(mnt);

    if(hr < 10) hour = '0'+ hour;
    if(mnt < 10) minute = '0'+ minute;

    return hour + ":" + minute;
}

bool isPal(string a) {
    string b = a;
    reverse(b.begin(), b.end());

    return a == b;
}

int main()
{
    int t; cin >> t; while(t--) {
        string tm; int x; cin >> tm >> x;

        int hour = ((int)tm[0]-'0')*10 + (int)tm[1]-'0';
        int minute = ((int)tm[3]-'0')*10 + (int)tm[4]-'0';

        int hr = x / 60;
        int mnt = x % 60;

        int cnt = 0;

        while(true) {
            if(isPal(tmStr(hour, minute))) cnt++;

            hour += hr;
            minute += mnt;

            if(minute >= 60) {
                minute -= 60;
                hour++;
            }

            if(hour >= 24) hour -= 24;

            if(tmStr(hour, minute) == tm) break;
        }

        cout << cnt << endl;
    }
    return 0;
}