#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mn = 2e9;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int idx1 = 0;
    int idx2 = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if (mn > abs(arr[i]-arr[i-1]))
        {
            mn = abs(arr[i]-arr[i-1]);
            idx1 = i;
            idx2 = i+1;
        }
    }
    if (abs(arr[0]-arr[n-1]) < mn) cout<<1<<" "<<n<<endl;
    else cout<<idx1<<" "<<idx2<<endl;
}
