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
        for(int i = 0 ; i < k ; i++)
        {
            cout<<"a";
        }
        string s ="abc";
        for(int i = 0 ; i < n - k ; i++)
        {
            cout<<s[(i+1)%3];
        }
        cout<<endl;
    }
}
