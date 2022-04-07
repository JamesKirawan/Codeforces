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
        string s;
        cin>>s;
        int ans=0;
        int left=0;
        int right=0;
        for(int i = 0 ; i < n ; i++)
        {
            if (s[i] == '(') left++;
            else right++;
            if (left == right){
                left=0;
                right=0;
            }
            else if (left < right)
            {
                ans++;
                left=0;
                right=0;
            }
        }
        cout<<ans<<endl;
    }
}
