#include <bits/stdc++.h>
using namespace std;
int t[10000005],l[10000005],h[10000005];
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m=0;
        cin>>n>>m;
        bool flag=true;
        int mx = m;
        int mn = m;
        int time = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>t[i]>>l[i]>>h[i];
        }
        for(int i = 0 ; i < n && flag ; i++)
        {
            int dif = t[i] - time;
            mn-=dif;
            mx+=dif;
            if (mn > h[i] || mx < l[i])
            {
                flag=false;
            }
            mn=max(mn,l[i]);
            mx=min(mx,h[i]);
            time=t[i];
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
