#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int ans = n;
        if (n % 2 == 0)
        {
            cout<<ans+(k*2)<<endl;
        }
        else
        {
            int d;
            for(int i = n ; i >= 2 ; i--)
            {
                if (n % i == 0)
                {
                    d=i;
                }
            }
            cout<<ans+d+(2*(k-1))<<endl;
        }
    }
}
