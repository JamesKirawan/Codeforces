#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        for(int i = 1 ; i <= n ; i++)
        {
            cout<<char('a' + i % b);
        }
        cout<<endl;
    }
}
