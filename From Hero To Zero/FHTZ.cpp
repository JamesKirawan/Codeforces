#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        long long int k;
        cin>>n>>k;
        long long int ans=0;
        if (k == 1) cout<<n<<endl;
        else{
            while(n > 0)
            {
                long long int c = n % k;
                ans+=c;
                n-=c;
                n/=k;
                ans++;
            }
            ans--;
            cout<<ans<<endl;
        }
    }
}
