// Problem Link: https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include <bits/stdc++.h>
using namespace std;

bool isSame(vector<int> &a, vector<int> &b)
{
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

class Solution
{
private:
public:
    int search(string pat, string txt)
    {
        int n = txt.size();
        int k = pat.size();
        int cnt = 0;

        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for (int i = 0; i < k; i++)
            a[pat[i] - 'a']++;

        for (int i = 0, j = 0; i < n; i++)
        {
            if (a[txt[i] - 'a'] == 0)
            {
                b = vector<int>(26, 0);
                j = i + 1;
                continue;
            }

            b[txt[i] - 'a']++;
            if (i - j >= k)
            {
                if (b[txt[j] - 'a'] > 0)
                    b[txt[j] - 'a']--;
                j++;
            }
            if (isSame(a, b))
                cnt++;
        }

        return cnt;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}