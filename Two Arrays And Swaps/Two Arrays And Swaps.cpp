#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int a[2][n+5];
        int ans=0;
        for(int i = 0 ; i < 2 ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                cin>>a[i][j];
            }
        }
        sort(a[0],a[0]+n);
        sort(a[1],a[1]+n);
        int l = 0;
        int r = n-1;
        for(int i = 0 ; i < k ; i++)
        {
            if (a[0][l] < a[1][r]){
                a[0][l]=a[1][r];
                l++;
                r--;
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            ans+=a[0][i];
        }
        cout<<ans<<endl;
    }

}
