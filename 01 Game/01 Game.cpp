#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int cnt=0;
        for(int i = 1 ; i < s.size() ; i++)
        {
            if (s[i] == '0' && s[i-1] == '1' || s[i] == '1' && s[i-1] == '0')
            {
                s.erase(i-1,2);
                cnt++;
                i-=2;
            }
        }
        if (cnt % 2 == 0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
}
