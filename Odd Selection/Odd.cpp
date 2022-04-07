#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>x>>n;
        int dp[x+5];
        int odd=0,even=0;
        for(int i = 0 ; i < x ; i++)
        {
            cin>>dp[i];
            if (dp[i] % 2 == 0) even++;
            else odd++;
        }
        if(odd == 0||odd % 2 == 0 && x == n|| even == 0 && n % 2 == 0)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

    }
}
