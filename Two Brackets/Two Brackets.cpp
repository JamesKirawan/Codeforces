#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int ans = 0;
        int tutup1 = 0;
        int buka1 = 0;
        int tutup2 = 0;
        int buka2 = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '(') buka1++;
            else if (s[i] == ')' && buka1 > 0) tutup1++;
            else if (s[i] == '[') buka2++;
            else if (s[i] == ']' && buka2 > 0) tutup2++;
            if (buka1 > 0 && tutup1 > 0)
            {
                ans++;
                buka1--;
                tutup1--;
            }
            if (buka2 > 0 && tutup2 > 0)
            {
                ans++;
                buka2--;
                tutup2--;
            }
        }
        cout<<ans<<endl;
    }
}
