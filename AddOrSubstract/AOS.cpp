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
        if (a == b) cout<<0<<endl;
        else if (a > b){
            if ((a - b) % 2 == 0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {
            if ((b - a) % 2 == 0) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
}
