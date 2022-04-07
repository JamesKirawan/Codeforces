#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(auto i : a)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i : b)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
