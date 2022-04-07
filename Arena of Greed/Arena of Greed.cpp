#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        cin>>n;
        long long int ans=0;
        long long int take=0;
        bool turn = true;
        while(n > 0)
        {
            if (n % 2 == 1)
            {
                take=1;
            }
            else
            {
                if ( (n / 2) % 2 == 1 || n == 4)
                {
                    take = n/2;
                }
                else
                {
                    take = 1;
                }
            }
            n-=take;
            if (turn)
            {
                ans+=take;
            }
            turn = !turn;
        }
        cout<<ans<<endl;
    }


}
