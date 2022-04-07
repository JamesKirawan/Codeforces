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
        long long int ans = 0;
        long long int sum = 8;
        for(int i = 1 ; i <= n / 2 ; i++)
        {
            ans+=i*sum;
            sum+=8;
        }
        cout<<ans<<endl;
    }
}
