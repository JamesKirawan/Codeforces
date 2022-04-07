#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        bool cek = false;
        if (a*2 <= b)
        {
            cek=true;
        }
        if (cek)
        {
            cout<<n*a<<endl;
        }
        else
        {
            long long int ans = 0;
            ans += (n / 2) * b;
            if (n % 2 == 0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<ans+a<<endl;
            }
        }

    }
}
