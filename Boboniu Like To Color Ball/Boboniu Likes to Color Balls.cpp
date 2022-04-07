#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int arr[4];
        int cnt=0;
        int zero=0;
        for(int i = 0 ; i < 4 ; i++)
        {
           cin>>arr[i];
           if (arr[i] % 2 == 0) cnt++;
           if (arr[i] == 0 && i != 3) zero++;
        }
        if (cnt == 2)
        {
            cout<<"NO"<<endl;
        }
        else if (cnt == 1)
        {
            if (zero == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
