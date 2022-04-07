#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        string s="abcdefghijklmnopqrstuvwxyz";
        int loop = n/k;
        int idx = 0;
        int bantu = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if (idx == loop && bantu < k-1)
            {
                idx=0;
                bantu++;
            }
            idx++;
            cout<<s[bantu];
        }
        cout<<endl;
    }
}
