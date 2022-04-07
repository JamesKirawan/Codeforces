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
        bool flag=true;
        for(int i = 1 ; i < n && flag ; i++)
        {
            if (arr[i] - arr[i-1] > 1)
            {
                cout<<"NO"<<endl;
                flag=false;
            }
        }
        if (flag) cout<<"YES"<<endl;

    }
}
