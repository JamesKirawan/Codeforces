#include <bits/stdc++.h>
using namespace std;

int N;
int catat[10];
int vis[10]={};
void perm(int depth)
{
    if (depth >= N)
    {
        bool flag = true;
        for(int i = 1 ; i < N-1 && flag ; i++)
        {
            if (catat[i] > catat[i-1] && catat[i] > catat[i+1])
            {
                continue;
            }
            else if (catat[i] < catat[i-1] && catat[i] < catat[i+1])
            {
                continue;
            }
            else
            {
                flag=false;
            }
        }
        if (flag)
        {
            for(int i = 0 ; i < N ; i++)
            {
                cout<<catat[i];
            }
            cout<<endl;
        }
    }
    for(int i = 0 ; i < N ; i++)
    {
        if (!vis[i])
        {
            vis[i]=1;
            catat[depth]=i+1;
            perm(depth+1);
            vis[i]=0;
        }
    }
}
using namespace std;
int main()
{
    cin>>N;
    perm(0);
}
