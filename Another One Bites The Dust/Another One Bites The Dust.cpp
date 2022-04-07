#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d = min(a,b);
    int e = min(max(a,b),min(a,b)+1);
    cout<<(1LL*2*c)+d+e<<endl;
}
