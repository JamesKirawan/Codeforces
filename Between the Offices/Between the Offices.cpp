#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if (s[i] == 'S' && s[i+1] == 'F')
        {
            cnt1++;
        }
        else if (s[i] == 'F' && s[i+1] =='S')
        {
            cnt2++;
        }
    }
    if (cnt1 > cnt2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
