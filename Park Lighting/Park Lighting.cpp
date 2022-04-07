#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,m;
        cin>>n>>m;
        int tot=n*m;
        if (tot % 2 == 0)
        {
            cout<<tot/2<<endl;
        }
        else
        {
            cout<<tot/2+1<<endl;        }
    }
}
