#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(long long int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int l=(n/2)-1;
        int r=n/2;
     //   cout<<l<<" "<<r<<endl;
        while (l >= 0 && r < n)
        {
            cout<<arr[r]<<" "<<arr[l]<<" ";
            l--;
            r++;
        }
        if (n % 2 == 1) cout<<arr[r];
        cout<<endl;
    }
}
