#include <bits/stdc++.h>
using namespace std;
map <pair<int,int>,int> mp;
map <pair<int,int>,int> ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin>>n>>q;
    int r[n],c[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>r[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin>>c[i];
    }
    for(int i = 0 ; i < 1 ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            long long int x = ( ((r[i]+c[j]) % 2) == 0 ? 1 : 0);
            mp[{i,j}]=x;
        }
    }
    for(int i = 0 ; i < 1 ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            long long int x = ( ((r[j]+c[i]) % 2) == 0 ? 1 : 0);
            mp[{j,i}]=x;
        }
    }
    int x=1,y=1;
    //kolom
    int flag = mp[{0,0}];
    for(int i = 0 ; i < n ; i++)
    {
        if (flag == mp[{0,i}])
        {
            ans[{0,i}] = x;
        }
        else
        {
            x++;
            ans[{0,i}]=x;
            flag = mp[{0,i}];
        }
    }
    //baris
    flag = mp[{0,0}];
    for(int i = 0 ; i < n ; i++)
    {
        if (flag == mp[{i,0}])
        {
            ans[{i,0}] = y;
        }
        else
        {
            y++;
            ans[{i,0}]=y;
            flag = mp[{i,0}];
        }
    }
    /*for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<ans[{i,j}]<<" ";
        }
        cout<<endl;
    }*/
    while(q--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1--;
        y1--;
        x2--;
        y2--;
        if (ans[{x1,0}] == ans[{x2,0}] && ans[{0,y1}] == ans[{0,y2}])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
