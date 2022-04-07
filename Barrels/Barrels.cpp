#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int sum=arr[n-1];
        int a = n-2;
        while (k--)
        {
            sum+=arr[a];
            arr[a]=0;
            a--;
        }
        cout<<sum<<endl;
    }
}
