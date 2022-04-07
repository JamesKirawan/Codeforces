#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int ans=1;
        while(n >= 7)
        {
            n-=7;
            ans++;
        }
        cout<<ans<<endl;
    }
}
