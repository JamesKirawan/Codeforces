#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tc=0;;
    while(cin>>n>>m)
    {
        tc++;
        if (n == m && n == 0)
        {
            break;
        }
        else
        {
            int marble[n];
            for(int i = 0 ; i < n ; i++)
            {
                cin>>marble[i];
            }
            sort(marble,marble+n);
            map <int , int> mp;
            for(int i = 0 ; i < n ; i++)
            {
                if (mp[marble[i]] == 0)
                {
                    mp[marble[i]]=i+1;
                }
            }
            int query[m];
            for(int i = 0 ; i < m ; i++)
            {
                int a;
                cin>>query[i];
            }
            cout<<"CASE# "<<tc<<":"<<endl;
            for(int i = 0 ; i < m ; i++)
            {
                int a = query[i];
                if (mp[a] == 0)
                {
                    cout<<a<<" not found"<<endl;
                }
                else
                {
                    cout<<a<<" found at "<<mp[a]<<endl;
                }
            }
        }
    }
}
