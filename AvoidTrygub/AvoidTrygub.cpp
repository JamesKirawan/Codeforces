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
        string s;
        string ans="";
        cin>>s;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if (s[i] == 'b')
            {
                cnt++;
                continue;
            }
            else
            {
                ans+=s[i];
            }
        }
        for(int i = 0 ; i < cnt ; i++)
        {
            cout<<"b";
        }
        cout<<ans<<endl;
    }

}
