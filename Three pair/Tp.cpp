#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if (arr[1] == arr[2])
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<arr[0]<<" "<<arr[2]<<endl;
        }
        else if (arr[0] == arr[2])
        {
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
