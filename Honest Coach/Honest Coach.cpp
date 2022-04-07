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
        int mn=1e9;
        sort(arr,arr+n);
        for(int i = 1 ; i < n ; i++)
        {
            mn=min(mn,arr[i]-arr[i-1]);
        }
        cout<<mn<<endl;
    }
}
