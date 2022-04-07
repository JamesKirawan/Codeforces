#include <bits/stdc++.h>
using namespace std;
typedef pair<int , int> pii;
typedef pair<int , pii> piii;
vector <piii> K;
int grid[105][105];
int nx[]={1,0,-1,0};
int ny[]={0,1,0,-1};
int n,m;
map <pii , pii> mp;
bool safe (int x , int y)
{
    return (x >= 1 && y >= 1 && x <= n && y <= m);
}
void bfs(int x , int y)
{
    bool vis[105][105]={};
    vis[x][y]=1;
    priority_queue <piii, vector <piii> , greater <piii>> q;
    q.push({0,{x,y}});
    while (!q.empty())
    {
        piii u=q.top();
        q.pop();
        x = u.second.first;
        y = u.second.second;
        int weight = u.first;
        if ((x == n || y == m || x == 1 || y == 1) && grid[x][y] == 0 ) K.push_back({weight+1,{x,y}});
       // cout<<x<<" "<<y<<endl;
        for(int i = 0 ; i < 4 ; i++)
        {
            int px=x+nx[i];
            int py=y+ny[i];
            if (!vis[px][py] && safe(px,py) && grid[px][py] == 0)
            {
                vis[px][py]=1;
                q.push({weight+1,{px,py}});
            }
        }
    }

}
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            cin>>grid[i][j];
        }
    }
    int starti,startj;
    cin>>starti>>startj;
    bfs(starti,startj);
    int mn=99999999;
    for(int i = 0 ; i < K.size() ; i++)
    {
        int weight=K[i].first;
        mn=min(mn,weight);
    }
    cout<<mn<<endl;
/*
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <=m ; j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    */

}
