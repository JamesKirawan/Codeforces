#include <bits/stdc++.h>
using namespace std;
long long int arr[100005];
const long long int MOD = 1e9+7;
void modInv(long long int n)
{
    arr[n]%=MOD;
}
void prec()
{
    for(int i = 2 ; i < 100005 ; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        modInv(i);
    }
}
int main()
{
    arr[0] =0;
    arr[1] = 1;
    prec();
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
}
