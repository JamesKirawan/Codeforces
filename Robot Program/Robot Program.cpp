#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x , y;
        cin>>x>>y;
        int diff = 0;
        diff = abs(x-y);
        if (diff <= 1)
        {
            cout<<x+y<<endl;
        }
        else if (diff >= 2 && (x == 0 || y == 0))
        {
            cout<<diff*2-1<<endl;
        }
        else
        {
            int mn =min(x,y);
            diff*=2;
            diff--;
            cout<<diff+(mn*2)<<endl;
        }
    }
}
