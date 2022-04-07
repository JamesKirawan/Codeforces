#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[n];
    string b[m];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    for(int i = 0 ; i < m ; i++)
    {
        cin>>b[i];
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        int d;
        cin>>d;
        d--;
        cout<<a[d % n]<<b[d % m]<<endl;
    }

}
