#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s;
    cin>>n>>s;
    long long int ans = 0;
    while (s >= n)
    {
        s-=n;
        ans++;
    }
    if (s == 0) cout<<ans<<endl;
    else cout<<++ans<<endl;

}
