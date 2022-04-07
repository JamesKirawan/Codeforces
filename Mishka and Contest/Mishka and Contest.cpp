#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    int arr[n+5];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int idx;
    for(int i = 0 ; i < n ; i++)
    {
        if (arr[i] <= k) cnt++;
        else {
            idx=i;
            break;
        }
    }
    for(int i = n-1 ; i >= idx ; i--)
    {
        if (arr[i] <= k ) cnt++;
        else break;
    }
    cout<<cnt<<endl;
}
