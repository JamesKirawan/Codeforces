#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int x,y,k;
        cin>>x>>y>>k;
        long long int b = x - 1;
        long long int a = (y * k) + k - 1;
        if (a % b != 0)
        {
            long long int ans = a/b + 1;
            ans+=k;
            cout<<ans<<endl;
        }
        else
        {
            long long int ans = a/b + k;
            cout<<ans<<endl;
        }
        //cout<<ans<<endl;
    }
}
