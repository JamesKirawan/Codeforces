#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int l = 0, r = 1e4;
        int ans = 2e9;
        int n ;
        cin>>n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            int m = mid * (mid + 1) / 2;
            if (m >= n)
            {
                r = mid;
                if (m - n >= mid+2) continue;
                if (m - n == 1)
                {
                    ans = min(ans,mid+1);
                }
                else
                {
                    ans = min(ans,mid);
                }
            }
            else
            {
                l = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
}
