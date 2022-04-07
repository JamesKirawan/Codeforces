#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    // 5 4 3 2 1 6 7 8 9 10 --> reverse(arr+0,arr+5+1)
    // 1 2 3 4 5 6 7 8 9 10
    sort(b,b+n);
    int l = 0;
    int r = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if (a[i] == b[i])
        {
            l++;
        }
    }
    if (l == n)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if (a[i] != b[i])
        {
            l=i;
            break;
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        if (a[i] != b[i])
        {
            r=i+1;
            break;
        }
    }
    reverse(a+l,a+r);
    bool sorted=true;
    for(int i = 0 ; i < n ; i++)
    {
        if (a[i] != b[i])
        {
            sorted = false;
        }
    }
    if (sorted)
    {
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }





}
