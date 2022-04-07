#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        string s;
        cin>>s;
        int cnt = 0;
        for(int j = 0 ; j < s.size() ; j++)
        {
            if (s[j] == '4' || s[j] == '7') cnt++;
        }
        if (cnt <= k)
        {
            //cout<<cnt<<endl;
            ans++;
            //cout<<s<<endl;
        }
    }
    cout<<ans<<endl;
}
