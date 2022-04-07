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
        int ans=0;
        bool valid=true;
        while (n != 1)
        {
            if (n % 3 == 0)
            {
                if (n % 2 == 0)
                {
                    n/=6;
                }
                else
                {
                    n*=2;
                }
                ans++;
            }
            else{
                valid=false;
                break;
            }
        }
        if (!valid) cout<<-1<<endl;
        else cout<<ans<<endl;


    }
}
