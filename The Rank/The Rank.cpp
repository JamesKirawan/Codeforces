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
    int n;
    cin>>n;
    int target = 0;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        arr[i]=0;
    }
    for(int i = 0 ; i < n ; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (i == 0)
        {
            target = a+b+c+d;
            arr[i]=target;
        }
        else
        {
            arr[i]=a+b+c+d;
        }
    }
    sort(arr,arr+n,greater<int>());
    int idx=-1;
    for(int i = 0 ; i < n ; i++)
    {
        if (arr[i] == target)
        {
            idx=i;
            break;
        }
    }
    cout<<idx+1<<endl;

}
