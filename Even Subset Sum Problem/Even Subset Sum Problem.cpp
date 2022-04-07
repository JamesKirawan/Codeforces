#include <bits/stdc++.h>
using namespace std;
#define INF -1e9
#define pb push_back
typedef long long int ll;
typedef pair <int,int> pii;
typedef pair <pii,int> piii;
const ll MOD = 1e9+7;
const int mxN = 1000005;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int kx[8] = { 2, 1, -1, -2, -2, -1, 1, 2};
int ky[8] = { 1, 2, 2, 1, -1, -2, -2, -1};
ll qpow(unsigned long long x , int y , int p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y % 2 == 1) res = (res * x) % p;
        y = y / 2;
        x = (x * x) % p;
    }
    return res;
}
ll modInverse(unsigned long long x , int p)
{
    return qpow(x, p - 2 , p);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector <int> odd;
        vector <int> even;
        for(int i = 1 ; i <= n ; i++)
        {
            int a;
            cin>>a;
            if (a % 2 == 0) even.pb(i);
            else odd.pb(i);
        }
        if (even.size() == 0 && odd.size() <= 1) cout<<-1<<endl;
        else
        {
            if (even.size() >= 1)
            {
                cout<<1<<endl;
                cout<<even[0]<<endl;
            }
            else if (odd.size() >= 2)
            {
                cout<<2<<endl;
                cout<<odd[0]<<" "<<odd[1]<<endl;
            }
        }
    }
}
