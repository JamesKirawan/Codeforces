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
        if (n % 2 == 1)
        {
            cout<<__gcd(n-1,(n-1)/2)<<endl;
        }
        else
        {
            cout<<__gcd(n,n/2)<<endl;
        }
    }
}
