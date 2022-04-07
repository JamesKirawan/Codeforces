#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int mx = max(a,b);
        long long int mn = min(a,b);
        bool flag = true;
        int ans=0;
        if (mx % mn != 0)
        {
            cout<<-1<<endl;
        }
        else if (mx == mn)
        {
            cout<<0<<endl;
        }
        else
        {
            long long int temp = mx/mn;
            while(flag)
            {
                if (temp % 8 == 0)
                {
                    temp/=8;
                    ans++;
                }
                else if (temp % 4 == 0)
                {
                    temp/=4;
                    ans++;
                }
                else if (temp % 2 == 0)
                {
                    temp/=2;
                    ans++;
                }
                else
                {
                    if (temp == 1)
                    {
                        break;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }

    }
}
