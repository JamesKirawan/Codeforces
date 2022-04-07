#include <bits/stdc++.h>
using namespace std;
typedef pair <int,int> pii;
typedef pair <int,pii> piii;
int n;
string grid[30];
vector <piii> k;
int nx[]={1,0,-1,0};
int ny[]={0,1,0,-1};
bool safe(int x , int y)
{
    return (x >= 0 && y >= 0 && x < n && y < n);
}
void bfs1(int x , int y)
{
    bool vis[30][30]={};
    priority_queue < piii, vector<piii> , greater <piii>> q;
    vis[x][y]=1;
    q.push({0,{x,y}});
    while (!q.empty())
    {
        piii u=q.top();
        q.pop();
        int weight=u.first;
        x = u.second.first;
        y = u.second.second;
      //  cout<<x<<" bfs 1 "<<y<<" bfs 1 "<<weight<<endl;
        if(grid[x][y] == 'K') k.push_back({weight,{x,y}});
        for(int i = 0 ; i < 4 ; i++)
        {
            int px=x+nx[i];
            int py=y+ny[i];
            if(safe(px,py) && !vis[px][py])
            {
                vis[px][py]=1;
                int inc=(grid[px][py] == '#');
                q.push({weight+inc,{px,py}});
            }
        }
    }
}
int bfs2(int weight , int x , int y)
{
    bool vis[30][30]={};
    priority_queue <piii,vector<piii> , greater <piii>> q;
    vis[x][y]=1;
    q.push({weight,{x,y}});
    while (!q.empty())
    {
        //cout<<x<<" bfs 2 "<<y<<" bfs 2 "<<weight<<endl;
        piii u=q.top();
        q.pop();
        int weight=u.first;
        x = u.second.first;
        y = u.second.second;
        if(grid[x][y] == 'E') return weight;
        for(int i = 0 ; i < 4 ; i++)
        {
            int px=x+nx[i];
            int py=y+ny[i];
            if(safe(px,py) && !vis[px][py])
            {
                vis[px][py]=1;
                int inc=(grid[px][py] == '#');
                q.push({weight+inc,{px,py}});
            }
        }
    }
}
int main()
{
    int x,y;
    int tc;
    cin>>tc;
    int a=0;
    while(tc--)
    {
        cin>>n;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>grid[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if (grid[i][j] == 'S')
                {
                    x=i;
                    y=j;
                }
            }
        }
        k.clear();
        bfs1(x,y);
        int mn=1e9;
        for(int i = 0 ; i < k.size() ; i++)
        {
            int weight=k[i].first;
            int x=k[i].second.first;
            int y=k[i].second.second;
            mn=min(mn,bfs2(weight,x,y));

        }
        cout<<"Case #"<<++a<<": "<<mn<<endl;
    }

}
