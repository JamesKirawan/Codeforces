#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long int n;
        long long int m;
        cin>>n>>m;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        sort(arr,arr+n);
        long long int sum=0;
        long long int b=0;
        for(int i = n-1 ; i >= 0 ; i--)
        {
            sum+=arr[i];
            b++;
            //cout<<sum<<endl;
            if (double (sum) / b >= m) ans++;
        }
        cout<<ans<<endl;
    }

}
