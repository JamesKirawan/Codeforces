#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c,d,e;
    c=d=e=0;
    for(int i = 1 ; i <= 6 ; i++)
    {
        if(abs(i-a) > abs(i-b))
        {
            e++;
        }
        else if (abs(i-a) < abs(i-b))
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    cout<<c<<" "<<d<<" "<<e<<endl;
}
