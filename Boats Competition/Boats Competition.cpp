#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        unordered_map <int , int> mp;
        int n;
        cin>>n;
        for(int i = 0 ; i < n ; i++)
        {
            int a;
            cin>>a;
            mp[a]++;

        }
        int ans=0;
        for(int i = 2 ; i <= 100 ; i++)
        {
            int cur=0;
            for(int j = 1 ; j <= min(i/2,n) ; j++)
            {
                if (mp[j] > 1 && j*2 == i) cur+=mp[j]/2;
                else if (mp[i-j] > 0 && mp[j] > 0 && j*2 != i) cur+=min(mp[i-j],mp[j]);
            }
            //cout<<cur<<"bug"<<i<<endl;
            ans=max(ans,cur);
        }
        cout<<ans<<endl;
    }
}
