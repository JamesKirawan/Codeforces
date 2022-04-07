#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        unordered_map <int,int> mp;
        int n,m;
        cin>>n>>m;
        mp.clear();
        for(int i = 0 ; i < n ; i++)
        {
            int a;
            cin>>a;
            mp[a]=1;
        }
        bool flag=false;
        int ans;
        for(int i = 0 ; i < m ; i++)
        {
            int a;
            cin>>a;
            if (mp[a] == 1 && !flag)
            {
                flag=true;
                ans=a;
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
