#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        unordered_map <long long int , int> data;
        int a;
        cin>>a;
        int b;
        for(int i = 0 ; i < a ; i++)
        {
            cin>>b;
            data[b]++;
        }
        int i=1;
        while (i <= 2048)
        {
            data[i*2] += floor(data[i]/2);
            i*=2;
        }
        if (data[2048] >= 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
