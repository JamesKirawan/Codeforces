#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[n+5];
    unordered_map <long long int ,int> dp;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int ans=2e9;
    for(int i = 0 ; i < n ; i++)
    {
        bool flag=true;
        int cnt=0;
        dp.clear();
        for(int j = 0 ; j <= i ; j++)
        {
            if (dp[arr[j]])
            {
                flag=false;
                break;
            }
            else
            {
                dp[arr[j]]=1;
            }
        }
        for (int j = n-1 ; j >= i ; j--)
        {
            if (dp[arr[j]] == 0) dp[arr[j]]++,cnt=j;
            else break;
        }
        if (flag)
        {
            ans=min(ans,cnt-i);
        }

    }
    cout<<ans<<endl;
}
