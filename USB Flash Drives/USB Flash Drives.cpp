#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt = 0;
    int sum = 0;
    int r = n-1;
    while (sum < m)
    {
        sum+=arr[r];
        //cout<<sum<<" ";
        r--;
        cnt++;
    }
    cout<<cnt<<endl;
}
