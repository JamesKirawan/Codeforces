#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int k;
        cin>>k;
        if (k == 1) cout<<0<<endl;
        else if (k == 2) cout<<1<<endl;
        else if (k == 3) cout<<2<<endl;
        else if (k % 2 == 1) cout<<3<<endl;
        else cout<<2<<endl;

    }

}
