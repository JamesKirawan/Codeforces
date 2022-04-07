#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        int sum=0;
        int odd=0,even=0;
        cin>>n;
        int arr[n+5];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            if (arr[i] % 2 == 0) even++;
            else odd++;
        }
        if(n % 2 == 0)
        {
            if (even - odd != 0)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(int i = 0 ; i < n ; i++)
                {
                    if (arr[i] % 2 != i % 2) sum++;
                }
                cout<<sum/2<<endl;
            }
        }
        else
        {
            if (even - odd != 1)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(int i = 0 ; i < n ; i++)
                {
                    if (arr[i] % 2 != i % 2) sum++;
                }
                cout<<sum/2<<endl;
            }
        }
    }
}
