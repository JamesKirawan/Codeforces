#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        if (n == 1 || m == 1)
        {
            cout<<"YES"<<endl;
        }
        else if (n * m == 4)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
