#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int cnt=0;
        while(1)
        {
            if (a > b) b+=a;
            else a+=b;
            cnt++;
            if (a > n || b > n) break;
        }
        cout<<cnt<<endl;
    }
}
