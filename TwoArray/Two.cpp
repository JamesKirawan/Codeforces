#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD=1e9+7;
const int MX=1000005;
ll fact[MX];
ll prec(ll mod = MOD)
{
    fact[0] = fact[1] = 1;
    for(int i = 2 ; i <= MX ; i++)
    {
        fact[i]=(fact[i-1]*i) % mod;
    }
}
ll qpow(unsigned long long x , int y , int p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y % 2 == 1) res=(res * x) % p;
        y = y / 2;
        x = (x * x) % p;
    }
    return res;
}
ll modInverse(unsigned long long x , int p)
{
    return qpow(x , p - 2 , p);
}
int main()
{
    ll n,m;
    cin>>n>>m;
    prec();
    ll x=2*m+n-1;
    ll y=2*m;
    ll z=n-1;
    ll ans =(fact[x] * modInverse(fact[y],MOD) % MOD * modInverse(fact[z],MOD) % MOD) % MOD;
    cout<<ans<<endl;

}
