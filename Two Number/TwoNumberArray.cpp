#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[n+5];
    long long int s=0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }
    if (s % 3 != 0) cout<<0<<endl;
    else
    {
        s/=3;
        long long int sum=0;
        long long int ans=0;
        long long int cnt=0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            sum+=arr[i];
            if (sum == s*2) ans+=cnt;
            if (sum == s) cnt++;
        }
        cout<<ans<<endl;
    }

}
