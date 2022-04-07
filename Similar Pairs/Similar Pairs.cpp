#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int m;
        cin>>m;
        int arr[m+5];
        for(int j = 0 ; j < m ; j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+m);
        bool flag=false;
        int odd=0,even=0;
        if(arr[0] % 2) odd++;
        else even++;
        for(int j = 1 ; j < m ; j++)
        {
            if (arr[j] % 2 == 0) even++;
            else odd++;
            if (arr[j] - arr[j-1] == 1) flag=true;

        }
        if (odd % 2 == 0 || even % 2 == 0) cout<<"YES"<<endl;
        else if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
