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
        if (a % b != 0)
        {
            cout<<b-a%b<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}