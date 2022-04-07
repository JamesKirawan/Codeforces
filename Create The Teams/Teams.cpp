#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+5];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int uk=1;
        int kel=0;
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if (arr[i] * uk >= k){
                kel++;
                uk=1;
                //cout<<arr[i]<<"idk"<<endl;
            }
            else{
                uk++;
            }
        }
        cout<<kel<<endl;
    }
}
