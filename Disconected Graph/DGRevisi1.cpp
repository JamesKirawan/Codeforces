#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
bool vis[50005],khusus[50005];
/*
long long int dfs (int node ,vector <int> adj[]){
    long long int temp=0;
    for(int i = 0 ; i < adj[node].size() ; i++)
    {
        if (!vis[adj[node][i]])
        {
            vis[adj[node][i]]=1;
            if (khusus[adj[node][i]])
            {
                cout<<node<<" -> "<<adj[node][i]<<endl;
                temp++;
            }
            temp+=dfs(adj[node][i],adj);
        }
    }
    return temp;
}
*/
long long int bfs(int node , vector <int>adj[])
{
    long long int temp=0;
    queue <int> q;
    q.push(node);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0 ; i < adj[u].size() ; i++)
        {
            if (!vis[adj[u][i]])
            {
                vis[adj[u][i]]=1;
                if (khusus[adj[u][i]])
                {
                    temp++;
                }
                q.push(adj[u][i]);
            }
        }
    }
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,e,q,r;
        cin>>n>>e>>q>>r;
        memset(vis,0,sizeof(vis));
        memset(khusus,0,sizeof(khusus));
        vector <pii> edge;
        vector <int> qkhusus;
        vector <int> adj[n+5]={};
        bool hapus[e+5];
        memset(hapus,0,sizeof(hapus));
        for(int i = 0 ; i < e ; i++)
        {
            int tmp1,tmp2;
            cin>>tmp1>>tmp2;
            edge.push_back({tmp1,tmp2});
        }
        for(int i = 0 ; i < q ; i++)
        {
            int tmp;
            cin>>tmp;
            khusus[tmp]=1;
            qkhusus.push_back(tmp);
        }
        for(int i = 0 ; i < r ; i++)
        {
            int tmp;
            cin>>tmp;
            hapus[tmp]=true;
        }
        for(int i = 0 ; i < e ; i++)
        {
            if (hapus[i+1]) continue;
            else{
                adj[edge[i].first].push_back(edge[i].second);
                adj[edge[i].second].push_back(edge[i].first);
            }
        }
        //long long int a=qkhusus.size();
        long long int awal=q*(q+1)/2;
        long long int akhir=0;
        for(int i = 0 ; i < qkhusus.size() ; i++)
        {
            if (!vis[qkhusus[i]])
            {
                vis[qkhusus[i]]=1;
                long long int temp ;
                temp = 1 + dfs(qkhusus[i],adj);
                akhir += temp * (temp+1) / 2;
            }
        }
        long long int ans = awal - akhir;
        cout<<awal<<" "<<akhir<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
