#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        if (a > 0) ans++,a--;
        if (b > 0) ans++,b--;
        if (c > 0) ans++,c--;
        if (a  && c) ans++,a--,c--;
        if (c  && b) ans++,b--,c--;
        if (a  && b) ans++,a--,b--;
        if (a > 0 && b > 0 && c > 0) ans++,a--,b--,c--;



        cout<<ans<<endl;
    }
}
