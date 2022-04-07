#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int L=n*(a-b);
        int R=n*(a+b);
        if (L > c + d || R < c - d) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
