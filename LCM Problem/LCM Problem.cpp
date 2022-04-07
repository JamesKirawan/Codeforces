#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        if (2 * x <= y)
        {
            cout<<x<<" "<<x*2<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }
}
