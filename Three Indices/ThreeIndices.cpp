#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i = 1 ; i <= n ; i++)
        {
            cin>>arr[i];
        }
        bool flag=false;
        for(int i = 1 ; i <= n ; i++)
        {
            if (flag)
            {
                break;
            }
            else if (i+1 < n && (arr[i] < arr[i+1] && arr[i+1] > arr[i+2]))
            {
                flag=true;
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            }
        }
        if (!flag) cout<<"NO"<<endl;

    }
}
