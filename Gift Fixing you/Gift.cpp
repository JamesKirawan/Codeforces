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
        long long int a[n+5],b[n+5];
        long long int mna=2e9;
        long long int mnb=2e9;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
            mna=min(mna,a[i]);
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>b[i];
            mnb=min(mnb,b[i]);
        }
        long long int ans=0;
        for(int i = 0 ; i < n ; i++)
        {
            long long int cek1;
            long long int cek2;
            cek1=a[i]-mna;
            cek2=b[i]-mnb;
            int mx=max(cek1,cek2);
            ans+=mx;
        }
        cout<<ans<<endl;
    }
}
