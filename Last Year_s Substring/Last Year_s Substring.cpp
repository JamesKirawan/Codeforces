#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        int r = s.size()-1;
        if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
        {
            cout<<"YES"<<endl;
        }
        else if (s[0] == '2' && s[1] == '0' && s[s.size()-2] == '2' && s[s.size()-1] == '0')
        {
            cout<<"YES"<<endl;
        }
        else if (s[0] == '2' && s[s.size()-3] == '0' && s[s.size()-2] == '2' && s[s.size()-1] == '0')\
        {
            cout<<"YES"<<endl;
        }
        else if (s[r-3] == '2' && s[r-2] == '0' && s[r-1] == '2' && s[r] == '0')
        {
            cout<<"YES"<<endl;
        }
        else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[r] == '0')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        //2020
        //20 20
        //2 020
        //2020
    }

}
