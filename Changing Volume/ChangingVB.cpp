#include <bits/stdc++.h>
using namespace std;
int solve(int x , int y , int ans)
{
    if (x == y) return ans;
    if (x - y > 5) solve(x-5,y,ans+1);
    else if (x - y == 2) solve(x-2,y,ans+1);
    else if (x - y == 1) solve(x-1,y,ans+1);
    else if (x - y == 3) solve(x-3,y,ans+2);
    else if (x - y == 4) solve(x-4,y,ans+2);
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int x;
        int y;
        if (a > b)
        {
            x=a;
            y=b;
        }
        else
        {
            x=b;
            y=a;
        }
        cout<<solve(x,y,0)<<endl;
    }
}
