// Problem Link: https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int k, vector<int> &arr, int n)
    {
        vector<long> s(n + 1, 0);
        for (int i = 0; i < n; i++)
            s[i + 1] = s[i] + arr[i];

        long mx = LONG_MIN;
        for (int i = 0; i <= n - k; i++)
            mx = max(mx, s[i + k] - s[i]);

        return mx;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}