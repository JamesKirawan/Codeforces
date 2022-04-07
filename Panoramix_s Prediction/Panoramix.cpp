#include <bits/stdc++.h>
using namespace std;
int dp[55];
bool isPrime[55];
int b = 2;
void Sieve()
{
    for(int i = 0 ; i <= 50 ; i++)
    {
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    dp[0]=0;
    dp[1]=1;
    for(int i = 2 ; i <= 50 ; i++)
    {
        if (isPrime[i])
        {
            dp[b]=i;
            b++;
            for (int j = i * i ; j <= 50 ; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }

}
int main()
{
    Sieve();
    int n,m;
    cin>>n>>m;
    bool flag=false;
    for(int i = 0 ; i < b ; i++)
    {
        if(dp[i] == n && dp[i+1] == m)
        {
            flag=true;
        }
    }
    if (flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
