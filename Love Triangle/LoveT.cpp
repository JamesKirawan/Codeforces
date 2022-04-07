#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    bool found=false;
    for(int i = 1 ; i <= n && !found; i++)
    {
        cin>>arr[i];
    }
    for(int i = 1 ; i <= n ; i++)
    {
        int x=arr[i];
        int y=arr[x];
        if (arr[y] == i)
        {
            found=true;
        }
    }
    if (found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
