#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int ans=0;
        vector <int> v;
        string s;
        cin>>s;
        int cnt=0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '1') cnt++;
            else if (s[i] == '0')
            {
                if (cnt == 0) continue;
                else {
                    v.push_back(cnt);
                    cnt=0;
                }
            }
        }
        if (cnt > 0) v.push_back(cnt);
        sort(v.begin(),v.end());
        for(int i = v.size()-1 ; i >=0 ; i-=2)
        {
           ans+=v[i];
        }
        cout<<ans<<endl;
    }
}
