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
        int arr[n+5];
        for(int i = n ; i >= 1 ; i--)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if (j | i >= j-i+1)
                {
                    arr[j]=j;
                }
            }
        }
        for(int i = 1 ; i <= n ; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
