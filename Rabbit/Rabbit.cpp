#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int s1=abs(x-y);
        int s2=a+b;
        int ans=s1%s2;
        if (!ans) cout<<s1/s2<<endl;
        else cout<<-1<<endl;
    }
}
