#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    bool in[100005]={};
    for(int i = m ; i <= z ; i+=m)
    {
        in[i]=true;
    }
    long long int ans = 0;
    for(int i = n ; i <= z ; i+=n)
    {
        if (in[i]) ans++;
    }
    cout<<ans<<endl;

}
