#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        long long int ans = 0;
       /* for(int i = 0 ; i < n ; i++)
        {
            if (arr[i] > 0)
            {
                int idx = i + 1;
                while (idx < n)
                {
                    if (arr[idx] < 0)
                    {
                        if (arr[i] > abs(arr[idx]))
                        {
                            arr[i]+=arr[idx];
                            arr[idx]=0;
                        }
                        else
                        {
                            arr[idx]+=arr[i];
                            arr[i]=0;
                            break;
                        }
                    }
                    idx++;
                }
            }
            else
            {
                ans+=abs(arr[i]);
            }
        }*/
        long long int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if (arr[i] < 0 && sum <= 0)
            {
                ans-=arr[i];
                ans-=sum;
                sum=0;
            }
            else if (arr[i] > 0)
            {
                sum+=arr[i];
            }
            else
            {
                sum+=arr[i];
                if (sum < 0)
                {
                    ans-=sum;
                    sum=0;
                }
            }
            //cout<<ans<<" Bug ";
        }
        cout<<ans<<endl;
    }
}
