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
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if (arr[0] == arr[n-1])
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
