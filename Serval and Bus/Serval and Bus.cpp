#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int dp[n+5];
    for(int i = 1 ; i <= n ; i++)
    {
        long long int a,b;
        cin>>a>>b;
        while(a < k)
        {
            a+=b;
        }
        dp[i]=a-k;
        //cout<<dp[i]<<endl;
    }
    long long int mn=1000000,ans=0;
    for(int i = 1 ; i <= n ; i++)
    {
        if (dp[i] <= mn) mn=dp[i],ans=i;
    }
    cout<<ans<<endl;
}
