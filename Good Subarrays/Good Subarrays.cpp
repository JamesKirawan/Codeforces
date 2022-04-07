#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
unordered_map <long long int , long long int> dp;
ll solve(ll idx,ll arr[],ll ans,ll n,ll now)
{
    if (idx > n-1) return ans;
    now+=arr[idx];
    ans+=dp[now-idx-1];
    dp[now-idx-1]++;
    solve(idx+1,arr,ans,n,now);
}
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
        dp[0]=1;
        for(int i = 0 ; i < n ; i++)
        {
            arr[i]=s[i]-'0';
        }
        /*for(int i = 0 ; i < n ; i++)
        {
            cout<<arr[i]<<endl;
        }*/
        cout<<solve(0,arr,0,n,0)<<endl;
    }
}
