#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int a=n-y;
        int b=a/x;
        cout<<b*x+y<<endl;

    }
}
