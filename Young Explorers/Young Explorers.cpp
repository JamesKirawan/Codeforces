#include <bits/stdc++.h>
using namespace std;
int dp[200005];
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        cout<<solve(0,0)<<endl;
    }
}
