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
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        int l = 0;
        int r = n - 1;
        int i = 0 ;
        while (i < n)
        {
            if (i % 2 == 0)
            {
                cout<<arr[l]<<" ";
                l++;
            }
            else
            {
                cout<<arr[r]<<" ";
                r--;
            }
            i++;
        }
        cout<<endl;
    }
}
