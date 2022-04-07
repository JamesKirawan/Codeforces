#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long int a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        long long int x = a & b;
        cout<<(a^x) + (b^x)<<endl;
    }
}
