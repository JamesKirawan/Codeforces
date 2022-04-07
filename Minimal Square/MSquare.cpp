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
        int mx=max(a,b);
        int mn=min(a,b);
        if (mn*2 > mx)
        {
            cout<<mn*mn*4<<endl;
        }
        else
        {
            cout<<mx*mx<<endl;
        }

    }
}
