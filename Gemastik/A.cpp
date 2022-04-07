#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int mx=0,mn=0;
        for(int i = 0 ; i < n ; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            mx+=max(a,max(b,c));
            mn+=min(a,min(b,c));
        }
        cout<<mn<<" "<<mx<<endl;
    }
}
