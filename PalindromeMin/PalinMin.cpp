#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
string s;
int solve(int x , int y)
{
    if (dp[x][y] != -1) return dp[x][y];
    if (x == y) return 1;
    if (x + 1 == y)
    {
        if (s[x] == s[y]) return 2;
        return 1;
    }
    if (s[x] == s[y])
    {
        return dp[x][y]= 2 + solve(x+1,y-1);
    }
    return dp[x][y]=max(solve(x+1,y),solve(x,y-1));
}
int main()
{
    cin>>s;
    memset(dp,-1,sizeof(dp));
    cout<<s.size()-solve(0,s.size()-1)<<endl;
}
