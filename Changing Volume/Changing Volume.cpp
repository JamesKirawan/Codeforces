#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int tot=abs(a-b);
        int ans=tot/5;
        tot%=5;
        if (tot == 0) ans+=0;
        else if (tot == 1 || tot == 2) ans+=1;
        else ans+=2;
        cout<<ans<<endl;
        {
            int ans=a/5;
            a%=5;

        }
    }
}
