#include <bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vi vector<int>

int n, m;
bool isValid(int i, int j) {
    return i < n && j < m && i >= 0 && j >= 0;
}

int bishopPoints(int sum, int x, int y, vvi a) {

    int i = x, j = y;
    while(isValid(i+1,j+1)) {
        i++; j++;
        sum += a[i][j];
    }
    i = x; j = y;
    while(isValid(i-1,j+1)) {
        i--; j++;
        sum += a[i][j];
    }
    i = x; j = y;
    while(isValid(i+1,j-1)) {
        i++; j--;
        sum += a[i][j];
    }
    i = x; j = y;
    while(isValid(i-1,j-1)) {
        i--; j--;
        sum += a[i][j];
    }

    return sum+a[x][y];
}

int main()
{
    int t; cin >> t; while(t--) {
        cin >> n >> m;
        vvi a(n, vi(m)); 
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin >> a[i][j];
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) 
                mx = max(mx, bishopPoints(0, i, j, a));
        cout << mx << endl;
    }
    return 0;
}