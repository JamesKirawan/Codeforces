#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    for(int i = 1 ; i <= n ; i++)
    {
        if (i % 3 != 0)
        {
            a=i;
            b=i;
            if ((n - a - b) % 3 != 0)
            {
                c = n-a-b;
                break;
            }
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}
