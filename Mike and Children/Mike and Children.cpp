#include <bits/stdc++.h>
using namespace std;
unordered_map <int , int> dp;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            dp[arr[i]+arr[j]]++;
            if (ans < dp[arr[i]+arr[j]]) ans=dp[arr[i]+arr[j]];
        }
    }
    cout<<ans<<endl;
}
