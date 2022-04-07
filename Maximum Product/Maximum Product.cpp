#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int mx1=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
        long long int mx2=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
        long long int mx3=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
        long long int ans=max(mx1,max(mx2,mx3));
        cout<<ans<<endl;
    }
}
