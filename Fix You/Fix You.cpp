#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>s[i];
        }
        int change=0;
        for(int i = 0 ; i < n ; i++)
        {
            if (s[i][m-1] == 'R') change++;
        }
        for(int i = 0 ; i < m ; i++)
        {
            if (s[n-1][i] == 'D') change++;
        }
        cout<<change<<endl;
    }
}
