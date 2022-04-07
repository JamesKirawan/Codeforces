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
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        /*
        int first=1;
        int second=0;
        sort(arr,arr+n);
        while(first < n)
        {
            cout<<arr[first]<<" ";
            first+=2;
        }
        while(second < n)
        {
            cout<<arr[second]<<" ";
            second+=2;
        }
        cout<<endl;
        */
        sort(arr,arr+n);
        for(int i = n-1 ; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
