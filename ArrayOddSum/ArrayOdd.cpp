#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int ans=0;
        int n;
        cin>>n;
        bool odd=false,even=false;
        for(int i = 0 ; i < n ; i++)
        {
            int a;
            cin>>a;
            if (a % 2) odd=true;
            else even=true;
            ans+=a;
        }
        if (ans % 2 == 0)
        {
            if (odd && even) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
