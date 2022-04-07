#include <bits/stdc++.h>
using namespace std;
#define INF -1e9
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
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if (arr[2] <= arr[1] + arr[0] - 1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<arr[2]-(arr[1]+arr[0]-1)<<endl;
    }
}
