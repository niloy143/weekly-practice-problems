#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int curSum = 0, curLen = 0, i = 0, j = 0;

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

};

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}