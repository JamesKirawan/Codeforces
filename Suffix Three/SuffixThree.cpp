#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string,string> mp;
    mp["po"]="FILIPINO";
    mp["desu"]="JAPANESE";
    mp["masu"]="JAPANESE";
    mp["mnida"]="KOREAN";
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        string ans="";
        for(int i = s.size()-1 ; i >= 0 ; i--)
        {
            ans=s[i]+ans;
            if (mp[ans] != "")
            {
                break;
            }
            //cout<<ans<<endl;
        }
        cout<<mp[ans]<<endl;
    }
}
