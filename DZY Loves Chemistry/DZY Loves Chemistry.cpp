#include <bits/stdc++.h>
using namespace std;
int n,m;
int parent[55];
long long int ans=1;
int finds(int x)
{
    if (parent[x] == x) return parent[x];
    return (finds(parent[x]));
}
void unions(int x , int y)
{
    int xx=finds(x);
    int yy=finds(y);
    if (xx != yy)
    {
        ans*=2;
        parent[yy]=xx;
    }
    return ;
}
int main()
{
    cin>>n>>m;
    if (m == 0)
    {
        cout<<1<<endl;
        return 0;
    }
    else
    {
        for(int i = 0 ; i <= n ; i++)
        {
            parent[i]=i;
        }
        for(int i = 0 ; i < m ; i++)
        {
            int a,b;
            cin>>a>>b;
            unions(a,b);
        }
        cout<<ans<<endl;
    }
}
