#include <bits/stdc++.h>
using namespace std;
int n,k;
int catat[10];
int vis[10];
void perm(int depth)
{
    if (depth >= k)
    {
        bool flag = true;
        for(int i = 1 ; i < depth && flag ; i++)
        {
            if (catat[i-1] > catat[i])
            {
                flag = false;
            }
        }
        if (flag)
        {
            for(int i = 0 ; i < depth ; i++)
            {
                if (i == 0)
                {
                    cout<<catat[i];
                }
                else
                {
                    cout<<" "<<catat[i];
                }
            }
            cout<<endl;
        }
    }
    else
    {
        for(int i = 0 ; i < n ; i++)
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
}
int main()
{
    cin>>n>>k;
    perm(0);
}
