#include <bits/stdc++.h>
using namespace std;
const int mxN = 10000005;
bool prime[mxN];
long long int dp[mxN];
void sieve()
{
    for(int i = 2 ; i <= mxN ; i++)
    {
        if (prime[i])
        {
            for(int j = i ; j <= mxN ; j+=i)
            {
                prime[j]=false;
                dp[j]++;
            }
        }
    }
}
int main()
{
    memset(prime,true,sizeof(prime));
    memset(dp,0,sizeof(dp));
    sieve();
    int tc;
    cin>>tc;
    int no = 1;
    while(tc--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int ans = 0;
        for(int i = a ; i <= b ; i++)
        {
            if (dp[i] == c)
            {
                ans++;
            }
        }
        cout<<"Case #"<<no<<": "<<ans<<endl;
        no++;
    }
}
