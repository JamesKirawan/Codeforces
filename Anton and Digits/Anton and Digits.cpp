#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn1=min(a,min(c,d));
    a-=mn1;
    int mn2=min(a,b);
    cout<<(mn1*256)+(mn2*32)<<endl;
}
