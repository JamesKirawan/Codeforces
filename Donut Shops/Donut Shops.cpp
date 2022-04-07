#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if (a < c)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
        if (a * b > c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        //
    }
}
