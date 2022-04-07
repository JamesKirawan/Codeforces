#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int x ;
        cin>>x;
        string ans="";
        while(x > 0)
        {
            int bantu = ((x - 1) % 26);
            ans = char(65+bantu) + ans;
            x = x - bantu;
            x/=26;
        }
        cout<<ans<<endl;
    }
}
