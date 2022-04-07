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
        int sum1=0;
        int sum2=0;
        if (n % 4 == 0)
        {
            cout<<"YES"<<endl;
            for(int i = 2 ; i <= n ; i+=2)
            {
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i = 1 ; i < n ; i+=2)
            {
                if (i == n-1) break;
                else{
                    cout<<i<<" ";
                    sum2+=i;
                }
            }
            cout<<sum1-sum2<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
