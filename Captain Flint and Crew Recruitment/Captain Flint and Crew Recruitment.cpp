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
        if (14 + 10 + 6 >= n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int flag=n-30;
            if (flag == 6 || flag == 10 || flag == 14)
            {
                cout<<15<<" "<<6<<" "<<10<<" "<<n-31<<endl;
            }
            else
            {
                cout<<14<<" "<<6<<" "<<10<<" "<<n-30<<endl;
            }
        }
    }
}
