#include <bits/stdc++.h>
using namespace std;
unordered_map <int , int> mp;
int parent[500005];
int finds(int x)
{
    if (x == parent[x]) return x;
    return parent[x]=finds(parent[x]);
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
    {
        parent[i]=i;
    }
    for(int i = 1 ; i <= m ; i++)
    {
        int group;
        cin>>group;
        int x;
        if (group == 0) continue;
        else{
            cin>>x;
            group--;
        }
        x=finds(x);
        for(int j = 1 ; j <= group ; j++)
        {
            int y;
            cin>>y;
            y=finds(y);
            if (x != y)
            {
                parent[y]=parent[x];
            }

        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        mp[finds(i)]++;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<mp[parent[i]]<<" ";
    }
    cout<<endl;
}
