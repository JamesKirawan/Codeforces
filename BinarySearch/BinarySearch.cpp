#include <bits/stdc++.h>
using namespace std;
const long long int MOD = 1e9+7;
const int mxN = 1000;
long long int fact[mxN];
void prec()
{
    fact[1]=1;
    for(int i = 2 ; i <= 1000 ; i++)
    {
        fact[i] = (fact[i-1] * i) % MOD;
    }
}
int main()
{
    prec();
    long long int n,x,idx;
    cin>>n>>x>>idx;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        arr[0]=i+1;
    }
    int left = 0;
    int right = n-1;
    while (left < right)
    {
        int middle = left + right / 2;
        if (arr[middle] <= x)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    cout<<right<<endl;
}
