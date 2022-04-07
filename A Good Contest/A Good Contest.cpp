#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    bool flag = false;
    while(tc--)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;
        if (a >= 2400 && b > a) flag = true;
    }
    if (flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
