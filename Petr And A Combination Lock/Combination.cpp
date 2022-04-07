#include <bits/stdc++.h>
using namespace std;
int n;
bool flag=false;
void solve(int idx,int ans,int dp[])
{
    if (!flag)
    {
        if (idx == n && ans == 0)
        {
            flag=true;
            cout<<"YES"<<endl;
            return;
        }
        else if (idx == n)
        {
            return;
        }
       // cout<<"idx : "<<idx<<" "<<ans<<endl;
        solve(idx + 1,(ans+dp[idx]) % 360,dp);
        solve(idx + 1,abs(ans-dp[idx]) % 360,dp);
    }
}
int main()
{
    int dp[20];
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>dp[i];
    }
    solve(0,0,dp);
    if (!flag) cout<<"NO"<<endl;
}
