#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long curSum = 0, curLen = 0, i = 0, j = 0, n = a.size();

    while(i < n) {
        while(curSum > k && j <= i) {
            curSum -= a[j]; j++;
        }

        if(curSum == k) curLen = max(curLen, i-j);
        curSum += a[i]; i++;
    }

    if(curSum == k)
        curLen = max(curLen, i-j);

    return curLen;
}

int main()
{
    long long n, k; cin >> n >> k;
    vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    cout << longestSubarrayWithSumK(a, k);   
    return 0;
}