#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k);

int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

#define ll long long

vector<ll> printFirstNegativeInteger(ll int a[], ll int n, ll int k)
{
    queue<int> q;
    for (int i = 0; i < k; i++)
        if (a[i] < 0)
            q.push(a[i]);

    vector<ll> negs;

    for (int i = 0, j = k; j < n; i++, j++)
    {
        negs.push_back(q.empty() ? 0 : q.front());

        if (a[j] < 0)
            q.push(a[j]);

        if (a[i] < 0)
            q.pop();
    }

    negs.push_back(q.empty() ? 0 : q.front());

    return negs;
}
