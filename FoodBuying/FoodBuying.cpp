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
        long long int cek = 1e9;
        if (n < 10)
        {
            cout<<n<<endl;
        }
        else
        {
            int ans=n;
            while (n >= 10)
            {
                int mod = n % 10;
                n/=10;
                ans+=n;
                n+=mod;
            }
            cout<<ans<<endl;
        }
    }
}
