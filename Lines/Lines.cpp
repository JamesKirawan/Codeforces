#include <bits/stdc++.h>
using namespace std;
typedef pair <int , int> pii;
typedef pair <int , pii> piii;
map <pii , pii> mp;
vector <pii> path;
int n;
string grid[45];;
int nx[]={1,0,-1,0};
int ny[]={0,1,0,-1};
void makepath(int a, int b)
{
    if(mp[{a,b}].first == -1 && mp[{a,b}].second == -1) return;
    grid[a][b]='+';
    makepath(mp[{a,b}].first , mp[{a,b}].second);
}
bool isSafe (int x , int y)
{
    return (x >= 0 && y >= 0 && x < n && y < n);
}
void bfs(int x , int y)
{
    bool vis[45][45]={};
    queue <pii> q;
    q.push({x,y});
    vis[x][y];
    while (!q.empty())
    {
        pii u = q.front();
        q.pop();
        x = u.first;
        y = u.second;
        if (grid[x][y] == 'X') path.push_back({x,y});
        for(int i = 0 ; i < 4 ; i++)
        {
            int px = x + nx[i];
            int py = y + ny[i];
            if (isSafe(px,py) && !vis[px][py] && grid[px][py] != 'O')
            {
                vis[px][py]=1;
                mp[{px,py}]={x,y};
                q.push({px,py});
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>grid[i];
    }
    int sx,sy,ex,ey;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if (grid[i][j] == '@')
            {
                sx=i;
                sy=j;
            }
            if (grid[i][j] == 'X')
            {
                ex=i;
                ey=j;
            }
        }
    }
    bfs(sx,sy);
    mp[{sx,sy}]={-1,-1};
    if (path.size() == 0) cout<<"N"<<endl;
    else
    {
        cout<<"Y\n";
        makepath(ex,ey);
        for(int i = 0 ; i < n ; i++)
        {
            for (int j = 0 ; j < n ; j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    }
}
