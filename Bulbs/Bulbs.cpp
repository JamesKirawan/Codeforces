#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    bool flag[m+5];
    memset(flag,false,sizeof(flag));
    for(int i = 0 ; i < n ; i++)
    {
        int a;
        cin>>a;
        for(int j = 0 ; j < a ; j++)
        {
            int b;
            cin>>b;
            flag[b]=true;
        }
    }
    for(int i = 1 ; i <= m ; i++)
    {
        if (!flag[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

}
