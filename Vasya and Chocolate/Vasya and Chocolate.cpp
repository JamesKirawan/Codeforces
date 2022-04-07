#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        long long int ans;
        ans = s / c;
        long long int free = (ans) / a * b;
        ans+=free;
        cout<<ans<<endl;
    }
}
