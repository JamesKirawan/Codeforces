#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD=1e9+7;
const ll MX=1e6+5;
ll fact[MX];
ll qpow[MX];
void prec()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= MX ;i++)
    {
        fact[i] = (fact[i-1] * i) % MOD;
    }
    qpow[0]=1;
    for(int i = 1 ; i <= MX ; i++)
    {
        qpow[i] = (qpow[i-1] * 2) % MOD;
    }
}
int main()
{
    ll n;
    cin>>n;
    prec();
    ll ans = (fact[n] + MOD - qpow[n-1]) % MOD;
    cout<<ans<<endl;
}
