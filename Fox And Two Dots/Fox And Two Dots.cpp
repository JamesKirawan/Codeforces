#include <bits/stdc++.h>
using namespace std;
int n,m;
bool cek[60][60];
char petak[60][60];
int nx[4]={1,-1,0,0};
int ny[4]={0,0,1,-1};
bool flag;
void dfs (int x ,int y,int p,int q)
{
    if (cek[x][y])
    {
        //cout<<petak[x][y]<<"anj"<<endl;
        flag=true;
        return;
    }
    cek[x][y]=true;
    for (int i = 0 ; i < 4 ; i++)
    {
        int px=x+nx[i];
        int py=y+ny[i];
        //if (px > 0 && px < n && py > 0 && py < m)
        //{
            //cout<<px<<" "<<py<<" "<<petak[px][py]<<endl;
            if (px == p && py == q) continue;
            if (petak[px][py] == petak[x][y]) dfs(px,py,x,y);
        //}

    }
}
int main()
{
    cin>>n>>m;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin>>petak[i][j];
        }
    }
    memset(cek,false,sizeof(cek));
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if (!cek[i][j])
            {
                dfs(i,j,0,0);
                if (flag)
                {
                    cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    cout<<"No";
    return 0;
}
