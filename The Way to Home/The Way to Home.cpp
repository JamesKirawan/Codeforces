#include <bits/stdc++.h>
using namespace std;
int memo[105];
int n,m;
string s;
int solve(int x)
{
    if (x == n-1) return 0;
    if (x > n) return 2e9;
    if (memo[x] != -1) return memo[x];
    int temp=2e9;
    for(int i = 1 ; i <= m ; i++)
    {
        if (s[i+x] == '1') temp=min(temp,solve(x+i)+1);
    }
    return memo[x]=temp;
}
int main()
{
    cin>>n>>m;
    cin>>s;
    memset(memo,-1,sizeof(memo));
    int ans=solve(0);
    if (ans == 2e9) cout<<"-1"<<endl;
    else cout<<ans<<endl;

}
