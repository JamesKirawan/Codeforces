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
        cout<<s[0];
        for(int i = 1 ; i < s.size() ; i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}
