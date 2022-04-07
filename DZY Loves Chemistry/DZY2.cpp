#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define be begin()
#define en end()
#define SZ(x) ((int)(x).size())
#define le length()
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < n; i++)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define c(a) cout << a << "\n";
#define endl '\n'
const int MOD = 1e9 + 7;
const int N = 1e5 + 1;
#define pi 3.141592653589793
ll powmod(ll a, ll b, ll mod)
{
    ll res = 1;
    a %= mod;
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
    }
    return res;
}
int r[100], p[100];
int find(int a)
{
    if (a == p[a])
        return a;
    return p[a] = find(p[a]);
}
void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    if (r[a] > r[b])
        swap(a, b);
    p[b] = a;
    r[a] += r[b];
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
        p[i] = i, r[i] = 1;
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        merge(x, y);
    }
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans=max(ans,r[i]);
    }
    cout<<endl;
    cout<<pow(2,ans-1)<<endl;
}
