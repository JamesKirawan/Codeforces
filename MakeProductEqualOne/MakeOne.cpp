#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli n;
lli dp[100005][2]={},arr[100005]={};
lli solve(lli idx1 , lli flag)
{
    lli idx2=0;
    if (flag == 1) idx2=1;
    if (dp[idx1][idx2] != 0) return dp[idx1][idx2];
    if (idx1 == n && flag == 1) return 0;
    if (idx1 == n && flag == -1) return 2e9;
    lli pos=abs(arr[idx1] - 1);
    lli neg=abs(arr[idx1] + 1);
    return dp[idx1][idx2]=min(solve(idx1+1,flag*1)+pos,solve(idx1+1,flag*-1)+neg);

}
int main()
{
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<solve(0,1)<<endl;
    /*for(int i = 0 ; i < n ; i++)
    {
        cout<<dp[i][0]<<" -1 "<<endl;
        cout<<dp[i][1]<<" 1 "<<endl;
    }*/
}

