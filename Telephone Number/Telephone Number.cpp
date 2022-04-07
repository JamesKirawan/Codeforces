#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        bool flag=false;
        for(int i = 0 ; i < a ; i++)
        {
            if (s[i] == '8')
            {
                if(a - i >= 11){
                    flag=true;
                    break;
                }
                else{
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
