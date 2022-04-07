#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        cin>>n;
        int k=2;
        long long int ans=1;
        while (true)
        {
            ans+=pow(2,k-1);
            if(n % ans == 0){
                ans=n/ans;
                break;
            }
            else{
                k++;
            }
        }
        cout<<ans<<endl;

    }
}
