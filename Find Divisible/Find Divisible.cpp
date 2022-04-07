#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int l,r;
       // long long int a,b;
       // bool flag=false;
        cin>>l>>r;
       /* for(long long int i = l ; i <= r && !flag; i++)
        {
            a=i;
            for(long long int j = i+1 ; j <= r ; j++)
            {
                if (j % a == 0)
                {
                    b=j;
                    flag=true;
                    break;
                }
            }
        }*/
        cout<<l<<" "<<l*2<<endl;

    }
}
