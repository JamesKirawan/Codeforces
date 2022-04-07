#include <bits/stdc++.h>
using namespace std;
string grid[505];
bool vis[505][505]={};
int n,m,k;
bool isSafe(int x , int y)
{
    return (x >= 0 && y >= 0 && x < n && y < m);
}
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
void dfs(int x , int y)
{
    vis[x][y]=1;
    for(int i = 0 ; i < 4 ; i++)
    {
        int px=dx[i]+x;
        int py=dy[i]+y;
        if (!vis[px][py] && isSafe(px,py) && grid[px][py] == '.')
        {
            //cout<<px<<" "<<py<<endl;
            dfs(px,py);
        }
    }
    if (k > 0)
    {
        k--;
        //cout<<x<<" "<<y<<endl;
        grid[x][y]='X';
    }
}
int main()
{
    cin>>n>>m>>k;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>grid[i];
    }
    int sx,sy;
    bool flag = true;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m  ; j++)
        {
            if (grid[i][j] == '.'){
                sx=i;
                sy=j;
                flag=false;
                break;
            }
        }
        if(!flag) break;
    }
    dfs(sx,sy);
    for(int i = 0 ; i < n ; i++)
    {
        cout<<grid[i];
        cout<<endl;
    }


}
