#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
unordered_map <long long int , long long int> dp;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll arr[n+5];
        dp.clear();
        dp[1]=1;
        for(int i = 0 ; i < n ; i++)
        {
            arr[i]=s[i]-'0';
        }
        int now=0;
        int ans=0;
        for(int i = 0 ; i < n ; i++)
        {
            now+=arr[i];
            //cout<<"Now : "<<now<<endl;
            ans+=dp[now-i];
          //  cout<<"Ans : "<<ans<<endl;
           // cout<<"Dp : Now-i "<<dp[now-i-1]<<" i : "<<i<<" length : "<<now-i<<endl;
            dp[now-i]++;
           // cout<<"Dp : Now-i "<<dp[now-i-1]<<" i : "<<i<<" length : "<<now-i<<endl;
        }
    }
}
