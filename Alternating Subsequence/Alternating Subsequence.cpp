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
        long long int a[n+1];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        long long int sum = 0;
        long long int mx = 0;
        long long int cur = a[0];
        for(int i = 1 ; i < n ; i++)
        {
            if (cur > 0 && a[i] > 0)
            {
                cur=max(a[i],cur);
            }
            else if (cur < 0 && a[i] < 0)
            {
               // cout<<"test"<<endl;
                cur=max(a[i],cur);
            }
            else if (cur > 0 && a[i] < 0)
            {
                sum+=cur;
                cur=a[i];
            }
            else if (cur < 0 && a[i] > 0)
            {
                sum+=cur;
                cur=a[i];
            }
           // cout<<cur<<endl;
        }
        sum+=cur;
        cout<<sum<<endl;
    }
}
