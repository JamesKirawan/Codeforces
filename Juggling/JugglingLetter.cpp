#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        vector <int> cnt(26);
        int n;
        cin>>n;
        for(int i = 0 ; i < n ; i++)
        {
            string s;
            cin>>s;
            for (char j : s)
            {
                cnt[j - 'a']++;
            }
        }
        bool flag=true;
        for(int i = 0 ; i < 26 ; i++)
        {
            if (cnt[i] % n != 0)
            {
                flag=false;
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
