#include <bits/stdc++.h>
using namespace std;
/*
int dapat=0;
bool solve(int arr[] , int n ,int a)
{
    int last = n-1;
    int first = 0;
    while(first <= last)
    {
        int middle = last + (first - last) / 2;
        if (arr[middle] >= a)
        {
            dapat=middle;
            return true;
        }
        else
        {
            first=middle+1;
        }
    }


    return false;
}
*/
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
        if (arr[0] + arr[1] <= arr[n-1]){
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        /*
        bool found=true;
        for(int i = 0 ; i < n && found; i++)
        {
            for(int j = i+1 ; j < n && found; j++)
            {
                int a;
                a=arr[i]+arr[j];
                if (solve(arr,n,a))
                {
                    cout<<i+1<<" "<<j+1<<" "<<dapat+1<<endl;
                    found=false;
                }
            }
        }
        if (found) cout<<-1<<endl;
            */
    }
}
