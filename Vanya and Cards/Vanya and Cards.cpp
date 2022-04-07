#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    sum=abs(sum);
    int ans = (sum % x == 0 ? sum/x : sum/x + 1);
    cout<<ans<<endl;

}
