#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD=1e9+7;
const int MX=1000005;
ll fact[MX];
ll inv[1000005];
ll finv[1000005];
void prec(ll mod = MOD)
{
    fact[0] = inv[0] = finv[0] = 1;
    fact[1] = inv[1] = finv[1] = 1;
    for (int i = 2; i <= MX; i++)
    {
        fact[i] = (fact[i-1] * i) % mod;
      // inv[i] = mod - (mod/i) * inv[mod%i] % mod;
        //finv[i] = (finv[i-1] * inv[i]) % mod;
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;
    prec();
    ll x=(2*m+n-1);
    ll y =2*m;
    ll z = n-1;
    ll ans=fact[583291];
   // ll ans = fact[x] * finv[y] % MOD * finv[z] % MOD ;
   // cout<<ans<<endl;
    cout<<ans<<endl;


}
