#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int mn=0;
    for(int i = 1 ; i < n ; i++)
    {
        while (arr[i] <= arr[i-1])
        {
            mn++;
            arr[i]++;
        }
    }
    cout<<mn<<endl;
}
