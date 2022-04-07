#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        bool flag=false;
        long long int a;
        cin>>a;
        for(int i = 2 ; i <= sqrt(a) ; i++)
        {
            if (a % i == 0)
            {
                long long int temp;
                temp=a/i;
                cout<<temp<<" "<<a-temp<<endl;
                flag = true;
                break;
            }
        }
        if (!flag) cout<<1<<" "<<a-1<<endl;

    }
}

