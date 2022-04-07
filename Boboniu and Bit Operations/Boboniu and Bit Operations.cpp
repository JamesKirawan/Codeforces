#include <bits/stdc++.h>
using namespace std;
int dp[2005][2005];
int n,m;
int arr1[205],arr2[205];
int solve(int idx , int y)
{
    if (idx > n) return y;
    if (dp[idx][y] != -1) return dp[idx][y];
    int mn=1e9;
    for(int i = 0 ; i < m ; i++)
    {
        mn=min(solve(idx+1,arr1[idx] & arr2[i] | y) , mn);
    }
    dp[idx][y]=mn;
    return dp[idx][y];
}
int main()
{
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0 ; i < m ; i++)
    {
        cin>>arr2[i];
    }
    cout<<solve(0,0)<<endl;
}
