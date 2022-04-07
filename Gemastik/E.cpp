#include <bits/stdc++.h>
using namespace std;
int memo[1005][1005][2];
int k[1005],v[1005];
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,s,p;
        cin>>n>>s>>p;
        for(int i = 0 ; i < n-1 ; i++)
        {
            cin>>v[i]>>k[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j <= s+1005 ; j++)
            {
                memo[i][j][0]=memo[i][j][1]=-99999999;
            }
        }
        memo[0][s][0]=0;
        //memo[0][s][1] naik pesawat
        //memo[0][s][0] naik kereta
        for(int i = 1 ; i < n ; i++)
        {
            for(int j = 0 ; j <= s ; j++)
            {
                memo[i][j][1]=max(memo[i-1][j+p][0],memo[i-1][j][1]);
                memo[i][j][0]=k[i-1]+max(memo[i-1][j+v[i-1]][1],memo[i-1][j+v[i-1]][0]);
            }
        }
        int mx = -1;
		for (int i=0 ; i<=s ; i++)
        {
            cout<<memo[n-1][i][0]<<" "<<memo[n-1][i][1]<<endl;
			mx = max(mx, max(memo[n-1][i][0],memo[n-1][i][1]));
        }
		cout<<mx<<endl;
    }
}
