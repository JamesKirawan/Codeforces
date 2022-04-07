#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0;
    char temp='a';
    for(char i : s)
    {
        int tes=abs(i-temp);
        if (tes > 13) tes=26-tes;
        temp=i;
        ans+=tes;
    }
    cout<<ans<<endl;
}
