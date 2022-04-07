#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int dp[35];
        int sum=2;
        for(int i = 1 ; i <= n ; i++)
        {
            dp[i]=pow(sum,i);
        }
        int ans1=0;
        int ans2=0;
        int d=n/2;
        if (n/2 == 1)
        {
            cout<<2<<endl;
            continue;
        }
        else
        {
            ans1+=dp[n];
            for(int i = 1 ; i < n ; i++)
            {
                if (i < d){
                    ans1+=dp[i];
                }
                else
                {
                    ans2+=dp[i];
                }
            }
        }
        cout<<abs(ans1-ans2)<<endl;
    }
}
