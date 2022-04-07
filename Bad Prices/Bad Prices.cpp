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
        int arr[n+5];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        int mx=9999999;
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            if (arr[i] > mx)
            {
                ans++;
            }
            mx=min(arr[i],mx);
        }
        cout<<ans<<endl;

    }
}
