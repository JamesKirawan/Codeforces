#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int same = 0;
        int distinct = 0;
        unordered_map <int , int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            int a;
            cin>>a;
            if (!mp[a])
            {
                distinct++;
                mp[a]++;
            }
            else
            {
                mp[a]++;
            }
            same = max(mp[a],same);
        }
        //cout<<distinct<<" "<<same<<endl;
        if (distinct > same)
        {
            if (same == 1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<same<<endl;
            }
        }
        else if (same > distinct)
        {
            cout<<distinct<<endl;
        }
        else
        {
            cout<<distinct-1<<endl;
        }
    }
}
