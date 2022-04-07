#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    bool flag=true;
    for(int i = x ; i > 0 ; i--)
    {
        for(int j = i ; j > 0 ; j--)
        {
            if (flag)
            {
                if ((i % j == 0) && (j*i > x) && (i / j < x))
                {
                    flag=false;
                    cout<<i<<" "<<j<<endl;
                }
            }
            else
            {
                break;
            }
        }
        if (!flag) break;
    }
    if (flag) cout<<-1<<endl;
}
