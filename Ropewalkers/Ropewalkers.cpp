#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2]>>d;
    sort(arr,arr+3);
    int ans =0;
    if (abs(arr[0] - arr[1]) < d)
    {
        ans+=(d-abs(arr[0] - arr[1]));
    }
    if (abs(arr[1] - arr[2]) < d)
    {
        ans+=(d-abs(arr[1] - arr[2]));
    }
    cout<<ans<<endl;

}
