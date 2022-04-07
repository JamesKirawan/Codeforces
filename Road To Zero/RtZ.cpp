#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int x,y;
        cin>>x>>y;
        long long int a,b;
        cin>>a>>b;
        bool valid=false;
        if (a * 2 > b) valid=true;
        if (valid)
        {
            long long int cek1=min(x,y);
            long long int cek2=max(x,y);
            long long int sum=(cek1*b)+((cek2-cek1)*a);
            cout<<sum<<endl;
        }
        else
        {
            long long int cek1=x+y;
            long long int sum=cek1*a;
            cout<<sum<<endl;
        }
    }
}
