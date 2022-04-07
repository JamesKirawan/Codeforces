#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int red = n*2;
    int green = n*5;
    int blue = n*8;
    long long int ans = ceil(1.0*red/k)+ceil(1.0*green/k)+ceil(1.0*blue/k);
    cout<<ans<<endl;



}
