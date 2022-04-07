#include <bits/stdc++.h>
using namespace std;
string dp="";
int main()
{
    for(int i = 1 ; i <= 1000 ; i++)
    {
        stringstream ss;
        ss << i;
        dp+=ss.str();
    }
    int n;
    cin>>n;
    cout<<dp[n-1]<<endl;
}
