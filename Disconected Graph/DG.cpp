#include <bits/stdc++.h>
using namespace std;
typedef pair <int , int> pii;
int edge[200005][2];
int parent[200005];
int par[200005];
int finds(int x)
{
    if (parent[x] == x) return x;
    return parent[x]=finds(parent[x]);
}
void unions(int x , int y)
{
    int xx=finds(x);
    int yy=finds(y);
    if (xx != yy)
    {
        parent[yy]=parent[xx];
    }
}
int finds1(int x)
{
    if (par[x] == x) return x;
    return par[x]=finds(par[x]);
}
void unions1(int x , int y)
{
    int xx=finds1(x);
    int yy=finds1(y);
    if (xx != yy)
    {
        par[yy]=par[xx];
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        unordered_map <int , int> node;
        vector <int> Qa;
        long long int awal=0,akhir=0;
        long int p[200005];
        long int r[200005];
        map <int , int> mp;
        map <int , int> vis;
        long long int Q,N,R,E;
        cin>>N>>E>>Q>>R;
        for(int i = 0 ; i < E ; i++)
        {
            for(int j = 0 ; j < 2 ; j++)
            {
                cin>>edge[i][j];
                parent[edge[i][j]]=edge[i][j];
                par[edge[i][j]]=edge[i][j];
            }
        }
        for(int i = 0 ; i < Q ; i++)
        {
            cin>>p[i];
            mp[p[i]]=1;
        }
        for(int i = 0 ; i < R ; i++)
        {
            cin>>r[i];
            vis[r[i]]=1;
        }
        sort(r,r+R);
        //Awal
        for(int i = 0 ; i < E ; i++)
        {
            unions(edge[i][0],edge[i][1]);
        }
        for(int i = 1 ; i <= N ; i++)
        {
            node[finds(i)]++;
        }
        int mx=-1;
        for(int i = 1 ; i <= N ; i++)
        {
            mx=max(mx,node[parent[i]]);
        }
        for(int i = 1 ; i <= N ; i++)
        {
            if (mx == node[parent[i]]) Qa.push_back(i);
        }
        for(int i = 0 ; i < Qa.size() ; i++)
        {
            if(mp[Qa[i]] == 1) awal++;
        }
        awal--;
        awal=awal*(awal+1)/2;
        //Akhir
        node.clear();
        Qa.clear();
        for(int i = 0 ; i < E ; i++)
        {
            if (vis[i+1]==1) continue;
            else{
                unions1(edge[i][0],edge[i][1]);
            }
        }
        mx=-1;
        for(int i = 1 ; i <= N ; i++)
        {
            node[finds1(i)]++;
        }
        for(int i = 1 ; i <= N ; i++)
        {
            mx=max(mx,node[par[i]]);
        }
        for(int i = 1 ; i <= N ; i++)
        {
            if (mx == node[par[i]]) Qa.push_back(i);
        }
        for(int i = 0 ; i < Qa.size() ; i++)
        {
            if(mp[Qa[i]] == 1) akhir++;
        }
        akhir--;
        akhir=akhir*(akhir+1)/2;
        long long int ans=awal-akhir;
        cout<<ans<<endl;
    }
}
